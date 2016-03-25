/*You are given a sorted list of N numbers and a number Num. Write a program to find the five numbers that are closest (numerically) to Num. A number x in the array is closest to Num if |Num-x| is the smallest among all such x possible.

Note: If the Num is present in given list, then it should be in the output.

Constraints:
        5 < N <20
        All numbers in list are between -10000 to 10000
        -10000 <Num< 10000
        There could be numbers that are repeated
Input:        
    N Num
    m1 m2 m3 .. mN
where mi's are N numbers in sorted order.

Output:
    p1 p2 p3 p4 p5
where pi's are closest numbers in increasing order of absolute difference from Num. If there are two numbers with same difference, print the larger one first.

There should be a space between each element but no space or newline at the end of the output sequence.
Sample Test Cases
Input	Output
Test Case 1	
10 6
1 2 3 4 5 6 7 8 9 10
6 7 5 8 4
Test Case 2	
10 6
1 2 4 5 6 9 10 13 15 20
6 5 4 9 10
Test Case 3	
10 -5
-17 -14 -14 -12 -11 -11 -9 -5 -4 -2
-5 -4 -2 -9 -11
Test Case 4	
10 7
-8 -7 -3 -3 0 0 1 3 6 9
6 9 3 1 0
Test Case 5	
10 5
-8 -6 -5 -3 -2 1 4 7 8 9
4 7 8 9 1
Test Case 6	
10 -18
-155 -95 -94 -59 -40 -33 98 116 127 144
-33 -40 -59 -94 -95
Test Case 7	
20 175
-196 -185 -178 -170 -168 -156 -150 -146 -122 -114 -107 -101 -89 -45 -28 21 47 82 89 129
129 89 82 47 21
Test Case 8	
15 153
-200 -173 -171 -161 -143 -136 -135 -118 -54 62 63 67 143 143 179
143 143 179 67 63
Test Case 9	
20 -200
-197 -177 -172 -152 -144 -117 -97 -88 -41 -11 8 12 51 56 90 94 101 123 129 149
-197 -177 -172 -152 -144
Test Case 10	
10 2
26 27 30 37 39 42 64 69 93 97
26 27 30 37 39
Test Case 11	
8 -6
-10 -9 -6 -5 -2 -1 0 1
-6 -5 -9 -2 -10
Test Case 12	
10 76
33 35 41 64 66 82 82 84 98 99
82 82 84 66 64
*/

// Solution :

#include<stdio.h>
#define MAXSIZE 20
void printclosest(int [],int ,int);
int BinarySearch(int [],int ,int);
void Delete(int [],int ,int);
int main()
{	
  int arr[MAXSIZE];
  int i,n,num;
  scanf("%d %d",&n,&num);
  for (i = 0; i < n; ++i)
	{
  	scanf("%d",&arr[i]);
	}
  printclosest(arr, num, n);//Calling Function for printing closest no.s
  return 0;
}
void printclosest(int arr[],int num,int n)
{
	int Loc,i,j;
	Loc=BinarySearch(arr,num,n);//Finding the location of 'num' in the array by calling binary search
	if(arr[Loc]==num)//if num is found in the array
	{
		printf("%d\t",num);//printing the num itself
		for(i=0;i<4;i++)
		{
			if((Loc+1)>(n-1))//Checking for boundary values
			{
				for(j=1;j<=4-i;j++)
				{
					printf("%d\t",arr[Loc-j]);
				}
				break;
			}
			if((Loc-1)<0)//Checking for boundary values
			{
				for(j=1;j<=4-i;j++)
				{
					printf("%d\t",arr[Loc+j]);
				}
				break;
			}
			if((arr[Loc+1]-num)<=(num-arr[Loc-1]))
			{
				printf("%d\t",arr[Loc+1]);
				Delete(arr,Loc+1,n);//Calling the function for deleting the printed no. & rearranging the array
				n--;//Reducing the upper bound of array	
			}
			else
			{
				printf("%d\t",arr[Loc-1]);
				Delete(arr,Loc-1,n);//Calling the function for deleting the printed no. & rearranging the array
				n--;//Reducing the upper bound of array	
				Loc--;
			}
		}
	}
	else//if num is not found in the array
	{
			for(i=0;i<5;i++)
		{
			if((Loc+1)>(n-1))//Checking for boundary values
			{
				for(j=0;j<5-i;j++)
				{
					printf("%d\t",arr[Loc-j]);
				}
				break;
			}
			if((Loc-1)<0)//Checking for boundary values
			{
				for(j=1;j<=5-i;j++)
				{
					printf("%d\t",arr[Loc+j]);
				}
				break;
			}
			if((arr[Loc+1]-num)<=(num-arr[Loc]))
			{
				printf("%d\t",arr[Loc+1]);
				Delete(arr,Loc+1,n);//Calling the function for deleting the printed no. & rearranging the array
				n--;//Reducing the upper bound of array		
			}
			else
			{
				printf("%d\t",arr[Loc]);
				Delete(arr,Loc,n);//Calling the function for deleting the printed no. & rearranging the array
				n--;//Reducing the upper bound of array	
				Loc--;
			}
		}
	}
}
int BinarySearch(int arr[],int num,int n)
{
	int BEG=0;
	int END=n-1,MID;
	while(BEG<=END)
	{
		MID=(BEG+END)/2;
		if(arr[MID]==num)
		{
			return MID;//return the location of 'num'
		}
		if(arr[MID]>num)
		{
			END=MID-1;
		}
		else if(arr[MID]<num)
		{
			BEG=MID+1;
		}
	}
	if(BEG>END)
	return END;//return the location of no. just smaller than 'num'
}
void Delete(int arr[],int Loc,int n)
{
	int i;
	for(i=Loc;i<n-1;i++)
	{
		arr[i]=arr[i+1];//Rearranging array
	}
}

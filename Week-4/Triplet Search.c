/*Given an array of unique numbers and a value, a valid triplet is a set of three numbers (not necessarily continuous in the array) that add up to the value. Write a program to count all valid triplets. Print the number of  valid triplets.

Hint: Can you solve this in O(n^2) steps?

Input : First line contains N and Sum (Space separated). Second line contains space separated list of N numbers.
Output: Number of triplets such that  sum possible

Constraints:
 0 < N < 100
All numbers in the list are unique and between -10^4 to 10^4
-10^3 < Sum < 10^3
Sample Test Cases
Input	Output
Test Case 1	
10 6
1 2 3 4 5 6 7 8 9 10
1
Test Case 2	
10 6
1 2 4 5 6 9 10 13 15 20
0
Test Case 3	
10 -5
-5 -4 -2 -17 -11 -13 -14 -12 -10 -9
0
Test Case 4	
6 5
5 2 -2 -3 3 0
3
Test Case 5	
10 9
1 2 3 4 5 6 7 8 9 10
3
Test Case 6	
9 0
-4 -3 -2 -1 0 1 2 3 4
8
Test Case 7	
10 -18
-155 -95 -94 -59 -40 -33 98 116 127 144
1
Test Case 8	
10 5
-8 -6 -5 -3 -2 1 4 7 8 9
4
Test Case 9	
10 -1004
-100 -573 -971 -343 -323 -338 -12 -21 -331 -471
3
Test Case 10	
20 -200
-197 -177 -172 -152 -144 -117 -97 -88 -41 -11 8 12 51 56 90 94 101 123 129 149
6
Test Case 11	
10 2
-1 4 2 1 5 9 0 3 7 -6
5
Test Case 12	
8 -6
-10 -9 -6 -5 -2 -1 0 1
3
Test Case 13	
10 -3
1 -2 3 -4 5 -6 7 -8 9 -10
6
*/

//Solution :

#include<stdio.h>
void Sort(int [],int);
int Binary(int [],int,int);
int main()
{
	int N,Sum,i,dif,j,k,Loc,count=0;
	int a[100];
	scanf("%d%d",&N,&Sum);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	Sort(a,N);//Sorting array
	dif=Sum-(a[0]+a[1]);
	Loc=Binary(a,N,dif);
	/*We will use binary search to check the triplet upto a certain value 
	  since after that the sum of values will be greater than the required sum
	*/
	for(i=0;i<Loc-1;i++)
	{
		for(j=i+1;j<Loc;j++)
		{
			for(k=j+1;k<=Loc;k++)
			{
				if((a[i]+a[j]+a[k])==Sum)
				{
					count++;
					break;
				}
			}
		}
	}
	printf("%d",count);
	return 0;
}
void Sort(int a[],int N)
{
	int i,j,temp;
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int Binary(int a[],int N,int dif)
{
	int BEG=0;
	int END=N-1,MID;
	while(BEG<=END)
	{
		MID=(BEG+END)/2;
		if(a[MID]==dif)
		{
			return MID;//return the location of 'num'
		}
		if(a[MID]>dif)
		{
			END=MID-1;
		}
		else if(a[MID]<dif)
		{
			BEG=MID+1;
		}
	}
	if(BEG>END)
	return END;//return the location of no. just smaller than 'num'
}

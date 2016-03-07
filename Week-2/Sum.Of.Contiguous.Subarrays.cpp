/*Write an efficient C program to find the largest sum of contiguous subarray within an one-dimensional array of integers.  A contiguous subarray of an array is defined as the sequence of elements that are in any continuous set of indices that are valid within an array.

Lets take an example of an array {5,-3, 4}. Possible contiguous subarray combinations are {5}, {-3}, {4}, {5,-3}, {-3,4} and {5,-3,4}. Note that {5,4} is not a valid subarray as the indices of 5 and 4 are not continuous.

The contiguous subarray  {5,-3,4} has the largest sum 6. 

Input Constraints:
	First line : array size (N), where 1<= N<=100
	Second line : N integers separated by spaces 
	where each number Ni satisfies
	-10000 <= Ni <=10000
	   
Output Constraints:
	Single integer SUM which is the largest sum of all possible contiguous subarrays.
Sample Test Cases
Input	Output
Test Case 1	
3
5 -3 4
6
Test Case 2	
4
1 1 1 1
4
Test Case 3	
8
-2 -3 4 -1 -2 1 5 -3
7
Test Case 4	
5
-5 -2 4 5 1
10
Test Case 5	
7
-1 -2 -3 -4 -5 -6 -7
-1
Test Case 6	
2
2000 2000
4000
Test Case 7	
10
-3 -4 1 2 3 -1 2 5 -8 8
12
Test Case 8	
5
-10000 -10000 -10000 -10000 -10000
-10000
Test Case 9	
6
-1 2 -2 4 -3 6
7
Test Case 10	
6
1 -2 2 -4 3 -6
3
Test Case 11	
9
0 -1 0 0 0 0 -1 0 0
0
Test Case 12	
20
1 1 1 1 1 1 1 1 1 1 -2 -3 1 1 1 1 -1 1 1 1
11
Test Case 13	
1
5
5
Test Case 14	
2
0 -1
0
*/

//Solution :


#include<stdio.h>
int main()
{
	int arr[100],i,j,k,sum=0,lgsum=-32768,l;
	int N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
			scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{

		for(j=0;j<N;j++)
		{
			for(k=i+1,l=j,sum=0;(k!=0)&&(l<N);k--,l++)//k=No of values in a pair
			{
				sum+=arr[l];
			}

				if(sum>lgsum)
				{
					lgsum=sum;
				}

		}
	}
	printf("%d\n",lgsum);
	return 0;

}


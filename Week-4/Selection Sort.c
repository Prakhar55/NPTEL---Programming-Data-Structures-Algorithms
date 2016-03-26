/*Selection sort is a sorting algorithm that sorts n elements in an array using n-1 calls of a procedure called Select() . Select(i) selects the smallest of the elements from positions i+1 to n and swaps with the element at i. 

Given a list of unsorted elements having N numbers, print the array  of elements after K calls to Select() starting with Select(1) as the first call and Select(K) as the last call with increasing order of parameters to Select().

Input:
N
K
m1 m2 m3 .. mN (Space separated)
(where mi's are elements of unsorted list)

Output:
Space separated list of N numbers after K calls to of Select().

Constraint:
2<= N <= 100
1<= K <= (N-1)
Numbers will be given in the range [-1000,1000].

Example 1:
5
1
9 8 7 6 5 

Expected Output: 
5 8 7 6 9

Explanation:
After the 1st call of Select(),  the smallest element will be selected(which is 5) and will be swapped with element at first position (which is 9). 

Example 2:
5
2
3 9 8 7 1

Expected Output:
1 3 8 7 9

Explanation:
After the 1st call to Select(), the smallest element which is 1 should get to the 1st position. To do so, it is swapped with 3 resulting in the intermediate result

1 9 8 7 3

After 2nd call, the next smallest element 3 should be at 2nd position. To do so, 3 is swapped with 9. Thus the expected result

3 9 8 7 1
Sample Test Cases
Input	Output
Test Case 1	
5
3
8 4 0 -2 4
-2 0 4 8 4
Test Case 2	
2
1
10 9
9 10
Test Case 3	
3
2
7 4 5
4 5 7
Test Case 4	
8
3
8 230 12 3 -5 -19 20 10
-19 -5 3 12 230 8 20 10
Test Case 5	
5
2
10 10 10 10 10
10 10 10 10 10
Test Case 6	
2
1
-2 -1
-2 -1
Test Case 7	
4
2
78 45 32 100
32 45 78 100
Test Case 8	
7
4
10 293 48 -4 -8 12 10
-8 -4 10 10 48 12 293
Test Case 9	
10
2
78 32 -10 2 89 72 -2 -87 10 92
-87 -10 32 2 89 72 -2 78 10 92
Test Case 10	
15
10
9 8 2 -10 2 3 48 -12 38 28 39 28 37 12 -100
-100 -12 -10 2 2 3 8 9 12 28 39 28 37 38 48
Test Case 11	
4
1
7 4 23 -1
-1 4 23 7
Test Case 12	
5
4
8 -5 18 20 5
-5 5 8 18 20
Test Case 13	
3
1
8 6 10
6 8 10
*/

//Solution : Using recursion

#include<stdio.h>
void printSelectSortIter(int [],int ,int);
void swap(int *,int ,int );
int main() 
{
	int a=14;
	while(a)
	{
    int arr[101], n, k, i;
    scanf("%d", &n); //taking n from user
    scanf("%d", &k);	//taking k from user
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);	//scanning elements
    printSelectSortIter(arr,n,k);
    a--;
	}
	return 0;
}
void printSelectSortIter(int arr[],int n ,int k)
{
	swap(arr,n,k);
	int i;	
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void swap(int *arr,int n ,int k)
{
	int temp, i,pos,min=1000;
	if(k==1)//Termination condition for recursion
	{	
	for(i=k;i<n;i++)
	{
		if(*(arr+i)<min)
		{
			min=*(arr+i);
			pos=i;
		}	
	}
	temp= *(arr+k-1);
	*(arr+k-1)=min;
	*(arr+pos)=temp;
	return ;
	}
	k--;
	swap(arr,n,k);
	for(i=k+1;i<n;i++)
	{
		if(*(arr+i)<min)
		{
			min=*(arr+i);
			pos=i;
		}	
	}
	temp=*(arr+k);
	*(arr+k)=min;
	*(arr+pos)=temp;
	return;
}

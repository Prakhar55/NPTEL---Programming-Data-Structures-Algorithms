/*Write a program that reads an MxN matrix A and prints its elements in spiral order.
You should start from the element in the 0th row and 0th column in the matrix and proceed in a spiral order as shown below.

INPUT:
First line contains two integers M and N separated by whitespace. The next M lines contain elements of matrix A, starting with the topmost row. Within each row, the elements are given from left to right.
OUTPUT:
Elements of the matrix printed in a spiral order. All the elements should be separated by whitespace.
CONSTRAINTS:
1 <= M <= 5, 1 <= N <= 5.
Elements in the matrix will be in the range [-100,100]

Sample Test Cases
Input	Output
Test Case 1	
3 3
0 1 2
7 8 3
6 5 4
0 1 2 3 4 5 6 7 8
Test Case 2	
2 2
1 10
3 5
1 10 5 3
Test Case 3	
4 4
7 8 1 2
3 4 3 1
1 2 8 6
5 4 9 7
7 8 1 2 1 6 7 9 4 5 1 3 4 3 8 2
Test Case 4	
1 1
20
20
Test Case 5	
3 3
1 2 3
4 5 6
7 8 9
1 2 3 6 9 8 7 4 5
Test Case 6	
2 4
1 2 3 4
5 6 7 8
1 2 3 4 8 7 6 5
Test Case 7	
3 4
1 2 3 4
5 6 7 8
9 10 11 12
1 2 3 4 8 12 11 10 9 5 6 7
Test Case 8	
1 2
1 20
1 20
Test Case 9	
2 2
1 -1
2 3
1 -1 3 2
Test Case 10	
3 1
1 2 3
1 2 3
Test Case 11	
1 4
1
2
3
4
1 2 3 4
Test Case 12	
5 5
1 2 3 4 5
6 7 8 9 1
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
1 2 3 4 5 1 15 20 25 24 23 22 21 16 11 6 7 8 9 14 19 18 17 12 13
*/

//Solution :


#include<stdio.h>
int main()
{
	int M,N,i,j;
	scanf("%d%d",&M,&N);
	int Matrix[M][N];
	int countrs=0,countre=M-1,countcs=0,countce=N-1;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&Matrix[i][j]);
				}	
	}
	while(1)
{
	for(j=countcs;j<=countce;j++)//i=const,j->
	{
		i=countrs;
		printf("%d\t",Matrix[i][j]);
	}
	if(countrs==countre)//Checking whether any rows are left
		return 0;
	countrs++;
	for(i=countrs;i<=countre;i++)//i->,j=const
	{
		j=countce;
		printf("%d\t",Matrix[i][j]);
	}
	if(countcs==countce)//Checking whether any columns are left
		return 0;
	countce--;
		for(j=countce;j>=countcs;j--)//i=const,j<-
	{
		i=countre;
		printf("%d\t",Matrix[i][j]);
	}
	if(countrs==countre)//Checking whether any rows are left
		return 0;
	countre--;
	for(i=countre;i>=countrs;i--)//i<-,j=const
	{
		j=countcs;
		printf("%d\t",Matrix[i][j]);
	}
	if(countcs==countce)//Checking whether any columns are left
		return 0;
	countcs++;
}
	
	
		
 return 0;
}

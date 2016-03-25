/*You are given a polynomial of degree n. The polynomial is of the form P(x) = anxn + an-1xn-1 + … + a0. For given values k and m, You are required to find P(k) at the end of the mth iteration of Horner’s rule. 

The steps involved in the Horner’s rule are given below,
 
Pn (x) = an
Pn-1 (x) = an-1 + x * Pn (x)                              1st iteration.
Pn-2 (x) = an-2 + x * Pn-1 (x)                           2nd iteration.
.
.
P0 (x) = a0 + x * P1 (x)                                     nth iteration.
 
In general, Pi (x) = ai + x * Pi + 1 (x) and P0(x) is the final result. 
 
Input
n m k
	   an an-1 …. a0 
(Space separated)
 
Output: P(k) value at the end of the mth iteration.
 
Sample Input:
2 2 5
3 2 1
 
Sample Output:
86
 
Constraints:
1 <= n, k, m <= 10
  0 <= ai <=10
Sample Test Cases
Input	Output
Test Case 1	
2 2 5
3 2 1
86
Test Case 2	
3 2 2
4 3 2 1
24
Test Case 3	
3 1 5
3 1 0 1
16
Test Case 4	
4 2 2
3 4 1 5 7
21
Test Case 5	
2 1 4
6 4 7
28
Test Case 6	
2 1 1
1 0 5
1
Test Case 7	
4 4 2
5 4 3 2 1
129
Test Case 8	
5 3 10
5 6 7 8 9 10
5678
Test Case 9	
4 3 10
6 7 8 9 10
6789
Test Case 10	
4 1 1
1 0 0 1 1
1
Test Case 11	
5 2 6
7 5 4 9 8 4
286
*/


// Solution :Using recursion & horner's Method

#include<stdio.h>
int Polynomial(int [],int ,int);
int main()
{
	int a=12;
	while(a)
	{
	int n,m,k,i;
	int arr[10];
	scanf("%d%d%d",&n,&m,&k);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d",Polynomial(arr,m,k));
 	a--;
	}
	return 0;
}
int Polynomial(int arr[],int m,int k)
{
	if(m==0)
	{
		return arr[m];
	}
	m--;
	return ((arr[m+1])+(k*Polynomial(arr,m,k)));	
}

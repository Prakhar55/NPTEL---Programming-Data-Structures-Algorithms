/*You are given a polynomial of degree n. The polynomial is of the form P(x) = anxn + an-1xn-1 + … + a0, where the ai‘s are the coefficients.  Given an integer x, write a program that will evaluate P(x). 

You are provided with a function named power( ) that takes two positive integers x & y and returns xy. If y is 0, the function returns 1. 

The prototype of this function is

int power(int x, int y);

You do not have to write the program for power ( ) function. This function is automatically added at the end of the code segment that you write. 
INPUT:
Line 1 contains the integers n and x separated by whitespace.
Line 2 contains the coefficients an, an-1…, a0 separated by whitespace.

OUTPUT:
A single integer which is P(x).
 
CONSTRAINTS:
The inputs will satisfy the following properties. It is not necessary to validate the inputs.

1 <= n <= 10
1 <= x <= 10
0 <= ai <=10
Sample Test Cases
Input	Output
Test Case 1	
2 5
3 2 1
86
Test Case 2	
3 1
4 3 2 1
10
Test Case 3	
2 1
1 0 5
6
Test Case 4	
3 1
3 1 0 1
5
Test Case 5	
4 2
5 4 3 2 1
129
Test Case 6	
5 10
5 6 7 8 9 10
567900
Test Case 7	
4 10
6 7 8 9 10
67900
Test Case 8	
4 1
1 0 0 1 1
3
Test Case 9	
1 2
1 0
2
Test Case 10	
1 1
1 1
2
Test Case 11	
1 10
10 1
101 */

//Solution :

#include<stdio.h>
/* function to calculate power x^y 
   It was predefined */
int power(int,int);
int power(int x, int y)
{
  int pow=1;
  while (y!=0){
      pow*=x;
      y--;
    }
  return pow;
}
int main()
{
	int n,x,i,a,p=0;
	scanf("%d%d",&n,&x);
	for(i=0;i<=n;n--)
	{
		scanf("%d",&a);
		p+=a*power(x,n);	
	}
	printf("%d",p);
	return 0;
}

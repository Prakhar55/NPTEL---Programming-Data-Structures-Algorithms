/*Write a C program that takes a positive number N and produces an output that is the product of its digits.

Explanation:
Take number 657.
Answer expected : 6 * 5 * 7 = 210

Constraint:
1<=N<=999999
Input: A single number
Output:  The value
Example 1:
Input: 657
Output: 210
Example 2:
Input: 7
Output: 7

Sample Test Cases
Input	Output
Test Case 1	
657
210
Test Case 2	
41
4
Test Case 3	
931
27
Test Case 4	
9
9
Test Case 5	
10
0
Test Case 6	
201
0
Test Case 7	
1234
24
Test Case 8	
5555
625
Test Case 9	
10156
0
Test Case 10	
999999
531441
Test Case 11	
124356
720
Test Case 12	
111111
1
*/

//Solution :

#include<stdio.h>
int main()
{
  long int N;
  int i,pro=1;
  scanf("%ld",&N);
  if(N<1||N>999999)//Checking constraints
    return 0;
  while(N!=0)//Calculating Product in reverse order
  {
    pro*=N%10;
    N/=10;
  }
  printf("%d",pro);
  return 0;
}

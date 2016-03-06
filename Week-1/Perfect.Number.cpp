/*Write a program to find whether a given number (say x) is a “perfect number” or not.

Definition of Perfect number:
A perfect number is a positive integer that is equal to the sum of its proper positive divisors excluding the number itself. By this definition, 1 is not a perfect number.

Explanation:
Take number 6.
Proper positive divisors of 6 is 1,2,3 and their sum is 1+2+3=6.
So, 6 is a perfect number.
Constraint:
1<=x<=1,000,000 

Input: A single positive number  x
Output:
yes if given number x is a perfect number
no if given number x is not a perfect number

Example 1:
Input: 6
Output: yes

Example 2:
Input: 7
Output: no
Sample Test Cases
Input	Output
Test Case 1	
6
yes
Test Case 2	
10
no
Test Case 3	
28
yes
Test Case 4	
13
no
Test Case 5	
1
no
Test Case 6	
496
yes
Test Case 7	
8128
yes
Test Case 8	
1000
no
Test Case 9	
4042
no
Test Case 10	
9
no
Test Case 11	
33550336
yes
*/

//Solution :

 
#include<stdio.h>
int main()
{
  long int x;
  int i,sum=0;
  scanf("%ld",&x);
  if(x<1||x>100000) //Checking Constraints
     return 0;
  for(i=1;i<x;i++)//Calculating Sum Of Proper Divisors
  {
    if(x%i==0)
      sum+=i;
  }
  if(sum==x)//Ckecking Whether No Is Perfect Or Not
    printf("yes");
  else
    printf("no");
  return 0;
}

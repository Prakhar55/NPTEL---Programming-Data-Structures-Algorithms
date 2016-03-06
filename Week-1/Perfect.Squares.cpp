/*Write a program to find the number of perfect squares between given two numbers A and B (both inclusive). A number is called a perfect square if it can be written as x*x for some integer x.

Constraints:
Both A and B are positive. They both are less than 100,000.

Input: Two numbers A and B separated by a space
Output: Count of the number of perfect squares


Example 1:
Input: 3 10
Output: 2


Example 2:
Input: 16 70
Output: 5

Sample Test Cases
Input	Output
Test Case 1	
3 10
2
Test Case 2	
16 70
5
Test Case 3	
11 99
6
Test Case 4	
10 25
2
Test Case 5	
1 100
10
Test Case 6	
17 124
7
Test Case 7	
1 2
1
Test Case 8	
46 47
0
Test Case 9	
17425 17688
0
Test Case 10	
10000 20000
42
*/

//Solution :


#include<stdio.h>
int main()
{
  long int A,B;
  int i,j;
  int count=0;
  scanf("%ld%ld",&A,&B);
  if(A>=100000||B>=100000)//Checking Constraints
    return 0;
  for(i=A;i<=B;i++)//No. of Perfect squares b/w given range
  {
    for(j=1;j<=i;j++)//Checking a no. for perfect square
    {
      if((i/j==j)&&(i%j==0))
        count++;
    }
  }
  printf("%d",count);//Printing the no. of perfect square
  return 0;
}

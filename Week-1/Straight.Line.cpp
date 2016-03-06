/*Given three points (x1, y1), (x2, y2) and (x3, y3) , write a program to check if all the three points fall on one straight line.

INPUT: Six integers x1, y1, x2, y2, x3, y3 separated by whitespace.

OUTPUT: Print “Yes” if all the points fall on straight line, “No” otherwise.

CONSTRAINTS: 
-1000 <= x1, y1, x2, y2, x3, y3 <= 1000

Sample Test Cases
Input	Output
Test Case 1	
1 0 0 0 3 0
Yes
Test Case 2	
-2 0 -2 1 -2 2
Yes
Test Case 3	
-62 14 -18 -23 -6 23
No
Test Case 4	
1 1 1 2 1 3
Yes
Test Case 5	
71 44 -36 -47 60 -74
No
Test Case 6	
0 1 0 4 0 -10
Yes
Test Case 7	
-26 24 77 -44 -55 -28
No
Test Case 8	
8 -4 10 0 23 26
Yes
Test Case 9	
60 -9 -71 -57 2 -71
No
Test Case 10	
7 9 72 74 -20 -18
Yes
Test Case 11	
9 -1 23 13 422 412
Yes
Test Case 12	
10 30 -18 -54 23 69
Yes
*/

//Solution :


#include<stdio.h>
int main()
{
  int x1,y1,x2,y2,x3,y3;
  scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
  if(x1<-1000||x1>1000)//Checking Constraints
    return 0;
  if(y1<-1000||y1>1000)//Checking Constraints
    return 0;
  if(x2<-1000||x2>1000)//Checking Constraints
    return 0;
  if(y2<-1000||y2>1000)//Checking Constraints
    return 0;
  if(x3<-1000||x3>1000)//Checking Constraints
    return 0;
  if(y3<-1000||y3>1000)//Checking Constraints
    return 0;
  if((y2*(x3-x1))+(y1*(x1-x3)))//Checking Straight Line
     printf("No");
  else
     printf("Yes");
     return 0;
 }

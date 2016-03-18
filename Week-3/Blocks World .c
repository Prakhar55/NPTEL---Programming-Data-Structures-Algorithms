/*Write a program which does the following:
There are 3 tables in a room. Every table can hold any number of blocks stacked on each other with only one block touching the table. No two blocks are of the same size. At any point of time, the blocks must be placed in ALL tables in such a way that no smaller sized block will have a larger sized block on top of it. 

Initially all the blocks are placed on table number 1 in the correct fashion (biggest block at bottom and smallest block at the top). Our aim is to move all the blocks from table number 1 to table number 3  such that at every step all the constraints are satisfied and the final order in table 3 is: smallest block must be at the top and the largest at the bottom and all the other blocks in between in increasing size. Tables 2 and  1 should not have any blocks on them at the end of the process. You are allowed to move only one block at a time from any table to any other table.

Write a program which takes number of blocks as input and outputs the number of moves required to do so.

Input: a single integer indicating number of blocks
Output:a single integer indicating the number of moves required

Constraints:  You can assume that the number of blocks will be atmost 20.
Sample Test Cases
Input	Output
Test Case 1	
9
511
Test Case 2	
2
3
Test Case 3	
3
7
Test Case 4	
18
262143
Test Case 5	
1
1
Test Case 6	
3
7
Test Case 7	
5
31
Test Case 8	
7
127
Test Case 9	
15
32767
Test Case 10	
13
8191
Test Case 11	
19
524287
*/

//Solution : By Recursion

#include<stdio.h>
int moves(int,int);
int main()
{
	int n,count;
	scanf("%d",&n);
	if(n>20)
	{
	printf("No of block can't be more than 20");//Applying Constraint Check
	return 0;
	}
	count=moves(n,3);//Calling move func to calc no of moves required
	printf("%d",count);
	return 0;	
}
int moves(int n,int p)
{
	int count;
	if(n==1)//base condition for recursion
	return 1;
	if(p==3)
	count=moves(n-1,2);//moving (n-1) blocks to table 2
	else if(p==2)
	count=moves(n-1,3);//moving (n-1) blocks to table 3
	return (2*count)+1;
	
}

/* Alternative Solution :
    Use The Formula -
     i.e., [no. of moves=2^n - 1]
     		where, n=no of blocks */


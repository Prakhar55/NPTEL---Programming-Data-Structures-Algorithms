/*Your college is organising a sporting event. The events are all done and now the task is to prepare the list of medal winners. The sports secretary for some reason assumed that the events will only have Gold and Silver medals but no Bronze medals. The contestants, especially the 3rd place winners were furious (understandably so!). To get things in control the secretary gives you the list of participants in an event and their standing in the event. Your task is to output the list of Bronze medalists in each of the events.

Each event has 10 participants. 

Input:  The number of test cases T followed by T lines. Each line has  10 numbers that indicate the time taken by each contestant to complete the task. Each task takes less than or equal to 30 seconds. If there are two bronze winners, print the one with the lower id.

Output: The id of the contestant who secured the Bronze medal.

Example:
Input
1
16 12 34 11 10 5 3 1 15 21
Output
6

Explanation: The 1 in first line indicates that there is only one testcase. The third position is for the player who took 5 sec to finish the task. The player is in the 6th person in the input list. Note that the ids start at 1 and not at 0.
Sample Test Cases
Input	Output
Test Case 1	
3
17 22 18 11 20 21 19 16 22 3
26 11 21 6 5 10 19 21 8 22
3 22 26 28 29 1 10 22 4 8
8
9
9
Test Case 2	
2
24 7 23 12 5 23 25 15 26 11
2 25 22 1 6 9 10 8 17 5
10
10
Test Case 3	
2
11 18 13 3 14 21 26 9 5 29
2 4 7 3 10 14 9 26 5 11
8
2
Test Case 4	
3
28 4 5 7 19 9 14 24 13 29
26 21 6 5 20 29 16 7 9 3
6 11 20 8 7 25 10 21 17 16
4
3
4
Test Case 5	
1
18 1 25 10 23 13 26 7 24 17
4
Test Case 6	
2
20 18 24 4 28 13 17 9 7 23
12 8 4 29 25 15 24 24 7 18
8
2
Test Case 7	
1
16 13 10 24 19 26 18 12 19 28
2
Test Case 8	
3
5 4 11 21 6 9 13 8 27 15
27 10 24 13 15 17 20 23 7 9
1 29 3 4 6 11 17 9 15 26
5
2
4
Test Case 9	
2
7 27 19 20 25 12 12 27 4 3
18 17 6 8 21 27 18 20 13 2
1
4
Test Case 10	
2
21 3 16 29 4 16 7 11 17 23
26 5 13 17 18 19 16 23 15 8
7
3
Test Case 11	
3
5 17 1 9 27 7 25 11 16 23
23 9 28 8 1 27 10 29 7 14
12 15 17 1 8 28 4 24 23 26
6
4
5
Test Case 12	
1
11 4 20 2 3 28 17 25 16 12
2
Test Case 13	
2
29 2 5 28 6 19 4 21 26 14
5 22 6 15 2 21 4 19 9 24
3
1
Test Case 14	
4
27 11 19 20 17 25 7 18 2 10
9 26 14 17 19 11 20 27 7 29
21 9 20 17 12 23 5 2 1 24
7 5 16 10 23 29 14 28 19 9
10
6
7
10
Test Case 15	
2
9 21 18 17 28 2 8 3 11 24
23 5 22 27 16 2 4 24 7 10
7
2 */

//Solution : 

#include<stdio.h>
int main()
{
	int i,j,k,arr[10],n,min,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<10;j++)
			scanf("%d",&arr[j]);
		for(k=0;k<3;k++)
		{
		min=30;
		for(j=0;j<10;j++)
		{
			if((arr[j]<min)&&(arr[j]!=0))
			{
				min=arr[j];
				pos=j;	
			}
		}
		arr[pos]=0;
    	}
    	printf("\t%d\n",pos+1);
	}
	return 0;
}

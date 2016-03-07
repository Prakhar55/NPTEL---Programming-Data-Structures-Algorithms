/*Write a program to find whether two given strings are permutations of each other.  A string str1 is a permutation of str2 if all the characters in str1 appear the same number of times in str2 and str2 is of the same length as str1.

Input: Two strings S1 and S2 
Output: 
yes - if they satisfy given criteria
no - otherwise

Constraints:
1 <= len(S1), len(S2) <= 100. 
Characters from ASCII range 0 to 127.
White space will not be given in the string.

Sample Test Cases
Input	Output
Test Case 1	
india
daini
yes
Test Case 2	
hellobye
hellobye!
no
Test Case 3	
iloveindia
loveindiai
yes
Test Case 4	
12434
43214
yes
Test Case 5	
aaa
aa
no
Test Case 6	
iitmadras.
madras.iit
yes
Test Case 7	
nptelisbest
ptenlisestb
yes
Test Case 8	
abcdefg
aabbccddeeffgg
no
Test Case 9	
12345
1122334455
no
Test Case 10	
#$%&
&%$#
yes
Test Case 11	
(abc)
(xyz)
no
Test Case 12	
"hellobye"
"byehello"
yes
*/

//Solution :



#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,x,y;
	char s1[100],s2[100];
	scanf("%s%s",s1,s2);
	x=strlen(s1);
	y=strlen(s2);
	if((x>100)||y>100)
		return 0;
	if(x!=y)
	{
		printf("no");
		return 0;
	}
		i=0;
	while(i<x)
	{
		for(j=0;j<y;j++)
		{
			if(s2[j]==s1[i])
			{
			
			 for(k=j;s2[k]!='\0';k++)
				 {
			      s2[k]=s2[k+1];//Overriding the matched alphabet with next alphabet
			     }
			     break;
		    }
			
		}
			i++;
			
	}
	if((strlen(s1)==x)&&(strlen(s2)==0))
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}

/*Write a program which takes a string as input and prints the longest prefix of the string whose reverse is a valid suffix of the string. For example, if "notation" is given as input, the prefix "no" is the longest prefix that has a matching valid suffix (namely "on") at the end.

If a string is a palindrome (i.e. if the string is the same as its reverse), then the prefix is the whole string itself. For example, if input is "civic", then the longest prefix is "civic" itself. If the string has no valid prefix, print 0. For example, if the input string is "bird", there is a mismatch at the first character itself and there is no valid prefix.

The symbols in the string will only be from the set {A-Z,a-z}. The symbols are case sensitive. i.e. ‘A’ and ‘a’ are considered to be different.
 
You are provided with a function called printChars ( ) that prints a character array from the starting position pointed to by p to the ending position pointed to by q. If p is NULL, it prints 0.

The prototype of the function is:

void printChars(char *p, char *q);

You do not have to write the program for printChars ( ) function. This function is automatically added at the end of the code segment that you write.

You can use string functions in the library if you desire to.

INPUT:
Input is a string of length N composed of symbols only from the set {A-Za,z}.

OUTPUT:
The longest prefix that has a corresponding matching suffix and 0 if such a prefix does not exist.

CONSTRAINTS:
The inputs will satisfy the following properties. It is not necessary to validate the inputs.

1<=N<=99
Sample Test Cases
Input	Output
Test Case 1	
notation
no
Test Case 2	
b
b
Test Case 3	
camera
0
Test Case 4	
malayAlam
mal
Test Case 5	
racEcar
racEcar
Test Case 6	
murdrum
murdrum
Test Case 7	
catalyst
0
Test Case 8	
v
v
Test Case 9	
MadAM
M
Test Case 10	
cIVIc
cIVIc
Test Case 11	
aa
aa
Test Case 12	
ab
0
*/

//Solution  :



#include<stdio.h>
#include<string.h>
//printChars func was a prefix to the code
void printChars(char *p, char *q)
{
  if(p == NULL)
    printf("0");
  else
  {
    char* itr = p;
    while(itr <= q)
	{
      printf("%c",*itr);
      itr++;
    }
  }
}
int main()
{
	int x;
	char str[100];
	char *p;
	char *q;
	scanf("%s",str);
	x=strlen(str);
	p=str;
	q=&str[x-1];
	if(*p!=*q)//If no character is equal
	{
		q='\0';
		printChars(q,p);
	    return 0;	
	}
	while(p<=q)
	{
		if(p==q)//If whole string is a palindrome & it is odd
		{
			printChars(str,&str[x-1]);
	        return 0;	
		}
		if(p+1==q)//If whole string is a palindrome & it is even
		{
			printChars(str,&str[x-1]);
	        return 0;	
		}
		if(*p!=*q)
			break;
		p++;
		q--;
	}
	printChars(str,--p);
	return 0;
}


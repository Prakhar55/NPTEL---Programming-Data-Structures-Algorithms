/*Write functions to calculate factorial, nCr and nPr and using those functions perform a custom computation.

nPr is the number of all permutations of n things, taken r at a time. nCr is the number of all combinations of n things, taken r at a time.

Your task is to  write three functions fact( ), ncr( ) and npr( ). The function definitions are given for your reference.

int fact(int n): This function should return the factorial of the parameter n. This function can be used to calculate nCr and nPr.
int npr(int n, int r): The function should return the value nPr where n and r as input parameters.
int ncr(int n, int r): The function should return the value nCr where n and r as input parameters.

You should not write the main function as the main function is prefixed. The functions you write should match the prototype in prefixed code. The output is printed in the main function. So NO output should be printed by any of the functions you write.


Explanation:
Given 4 integers a,b,c,d your program should output (aCb - cPd).


Input: 4 integers a, b, c and d
Output: (aCb - cPd)

Constraints:
For simplicity you can assume that input will be given such that a>=b and c>=d.
1<= a,b,c,d <= 10
Sample Test Cases
Input	Output
Test Case 1	
6 3 8 2
-36
Test Case 2	
9 9 4 2
-11
Test Case 3	
3 2 4 1
-1
Test Case 4	
5 2 7 4
-830
Test Case 5	
6 2 7 1
8
Test Case 6	
8 3 5 2	
36
Test Case 7	
9 4 3 1
123
Test Case 8	
4 2 8 5	
-6714
Test Case 9	
7 2 9 3
-483
Test Case 10	
9 2 8 1
28
Test Case 11	
1 1 1 1
0
Test Case 12	
5 2 6 1
4
*/


//Solution :


/*
 This is a prefixed code. 
*/
//From Here
#include<stdio.h>
//Write a function for n factorial. 
int fact(int);
//Write a function calculating nCr
int ncr(int,int);
//Write a function calculating nPr
int npr(int,int);

int main(){
  int a,b,c,d,output_ncr,output_npr;
  scanf("%d %d %d %d",&a,&b,&c,&d);
  output_ncr=ncr(a,b);
  output_npr=npr(c,d);
  printf("%d",(output_ncr-output_npr));
   return 0;
}

//Upto Here
int fact(int n)
{
	int	fact=1,i;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
int ncr(int n,int r)
{
	int factn=fact(n);
	int factr=fact(n-r)*fact(r);
	return factn/factr;
}
int npr(int n,int r)
{
	int factn=fact(n);
	int factr=fact(n-r);
	return factn/factr;
}

/*A string is given which has letters from English alphabet and parentheses. The depth of a letter is defined as the number of balanced parentheses it is surrounded by. Write a  C program to find the depth of each letter in the input string.

Explanation:

(a(b)((cd)e)f)g

g is at depth 0
a and f are at depth 1
b and e are at depth 2
c and d are at depth 3

Input Constraints:

1) Input string can be of length 1 to 100.
2) The input will have only ‘(‘ , ‘)’ and letters from English alphabet.
3) There will be no repetition of letters.
4) Only lowercase letters are used.
5) The letters can be in any sequence.   
6) The parentheses are always well balanced. Every '(' has a matching ')' that follows it later in the string. Every ')' has a matching '(' before it in the input string.
7) Notice that there are no space in the string.

Input: An array of characters
Output:  
1) The depth of each letter separated by a space.
2) The order of the depth of the letters should be the same  order in which the letters appear in the input.
3)To mark the end of the output it should end with a space and a ‘#’ character.

Example 1:
Input: (a(b)((cd)e)f)g
Output: 1 2 3 3 2 1 0 #

Example 2:
Input: p(r(q))(s)
Output: 0 1 2 1 #

In this example, letters are appearing in the order p followed by r followed by q and s. They have depth of 0, 1, 2 and 1 respectively. Note that the depth is not printed in the order p,q,r,s (the alphabetical order) but p,r,q,s (the order in which they appear in the input string).
Sample Test Cases
Input	Output
Test Case 1	
(a(b)((cd)e)f)g
1 2 3 3 2 1 0 #
Test Case 2	
a(b(c))(d)
0 1 2 1 #
Test Case 3	
a(b(c))(d(fe))
0 1 2 1 2 2 #
Test Case 4	
a(b(c))(d(f()e))
0 1 2 1 2 2 #
Test Case 5	
()
 #
Test Case 6	
ab()(c(d(e(f)()(g)h)))
0 0 1 2 3 4 4 3 #
Test Case 7	
((((a))b))cdegfhi(jklmnop)
4 2 0 0 0 0 0 0 0 1 1 1 1 1 1 1 #
Test Case 8	
((a))((b(c)((d(e(f(g(h(i(j(k(l))))))))))))
2 2 3 4 5 6 7 8 9 10 11 12 #
Test Case 9	
((a))((b(c)((d()(e(f(g(h(i(j(k(l)))))())))))))(m(n()(o(p(q(r(s(t()(u(v(w(x(y(z)))))(())))))()))())))
2 2 3 4 5 6 7 8 9 10 11 12 1 2 3 4 5 6 7 8 9 10 11 12 13 14 #
Test Case 10	
(a)b(c(def)g(h(ijkl(mn)o)p))
1 0 1 2 2 2 1 2 3 3 3 3 4 4 3 2 #
Test Case 11	
(z)
1 #
Test Case 12	
((x))
2 #
Test Case 13	
abc(d)
0 0 0 1 #
*/

//Solution :



#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i;
	char s1[100];
	scanf("%s",s1);
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]=='(')//Depth -->
			count++;
		else if(s1[i]==')')//Depth <--
			count--;
		else
			printf("%d\t",count);
			
	}
	printf("#");
	return 0;
}

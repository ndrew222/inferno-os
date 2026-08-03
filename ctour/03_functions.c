/* Functions. The shape is:
 *
 *     <return type>  <name> ( <parameters> )  { <body> }
 *
 * "void" is C's word for "nothing".
 */

#include <stdio.h>

/* takes two ints, gives back an int */
int add(int a, int b)
{
	return a + b;
}

/* takes nothing, returns nothing. This exact shape -- void f(void) --
 * is what every instruction in Inferno's VM looks like.
 */
void greet(void)
{
	printf("hi from greet()\n");
}

int main(void)
{
	printf("add(2, 3) = %d\n", add(2, 3));
	greet();
	return 0;
}

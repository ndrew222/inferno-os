/* Pointers. Two new symbols, and they are opposites.
 *
 *     &x   "the address of x"
 *     *p   "the value living at address p"
 *
 * A pointer variable is declared with a * in its type:
 *     int *p;    means   "p holds the address of an int"
 */

#include <stdio.h>

int main(void)
{
	int  x = 42;
	int *p;             /* p can hold the address of an int */

	p = &x;             /* put the address of x into p */

	printf("x is           %d\n", x);
	printf("the address of x is %p\n", (void*)p);   /* %p prints an address */
	printf("the value at p is   %d\n", *p);         /* follow it back to 42 */

	/* The important part: *p works on the LEFT of = too.
	 * There it means "store into that address" rather than "read from it".
	 */
	*p = 99;

	printf("after *p = 99, x is now %d\n", x);   /* x changed! */

	return 0;
}

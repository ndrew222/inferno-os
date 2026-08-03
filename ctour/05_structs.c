/* A struct bundles several values together under one name.
 * Think of it as a record, or a simple object with no methods.
 */

#include <stdio.h>

/* This defines a new type called "struct Point". */
struct Point
{
	int x;
	int y;
};

int main(void)
{
	struct Point p;     /* make one */

	p.x = 3;            /* the dot reaches inside it */
	p.y = 7;

	printf("p is at (%d, %d)\n", p.x, p.y);

	return 0;
}

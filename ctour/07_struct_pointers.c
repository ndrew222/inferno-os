/* Pointers to structs, and the -> shorthand. */

#include <stdio.h>

struct Point
{
	int x;
	int y;
};

int main(void)
{
	struct Point  p  = {3, 7};
	struct Point *pp = &p;      /* pp holds the address of p */

	/* These two lines mean exactly the same thing.
	 * -> is just shorthand for "dereference, then take the field".
	 */
	printf("(*pp).x is %d\n", (*pp).x);
	printf("pp->x    is %d\n", pp->x);

	pp->y = 100;                /* writing through the pointer */
	printf("p.y is now %d\n", p.y);

	return 0;
}

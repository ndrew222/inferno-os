/* Two last ideas, and then you can read the VM.
 *
 * 1. void*  is an address with no type attached: "something is here,
 *    but I am not saying what."
 *
 * 2. A cast, written (type*), says "treat this address as pointing at
 *    a value of THIS type". It changes nothing in memory. It only tells
 *    the compiler how to interpret the bytes at that address.
 */

#include <stdio.h>

int main(void)
{
	int   n    = 1000;
	void *addr = &n;     /* an untyped address */

	/* addr has no type, so we cannot read through it directly.
	 * We must first say what we think is there.
	 *
	 * Read this inside-out:
	 *     addr            the address
	 *     (int*)addr      "treat it as pointing at an int"
	 *     *((int*)addr)   "and give me the value there"
	 */
	printf("as an int: %d\n", *((int*)addr));

	/* Same address, reinterpreted as a single byte. Nothing in memory
	 * changed -- only our claim about what lives there.
	 */
	printf("as a char: %d\n", *((char*)addr));

	/* And it still works on the left of = */
	*((int*)addr) = 7;
	printf("n is now %d\n", n);

	return 0;
}

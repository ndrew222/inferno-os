/* Variables have a type, and the type decides how many bytes they occupy.
 * This is the idea Inferno's VM is built on, so it is worth seeing directly.
 */

#include <stdio.h>

int main(void)
{
	char   c = 65;          /* 1 byte  */
	int    i = 1000;        /* 4 bytes */
	double d = 3.5;         /* 8 bytes */

	/* printf's first argument is a template. Each % is a hole that gets
	 * filled by the arguments that follow, in order.
	 *   %d = print as a whole number
	 *   %c = print as a character
	 *   %f = print as a decimal number
	 */
	printf("c = %d (as a character: %c)\n", c, c);
	printf("i = %d\n", i);
	printf("d = %f\n", d);

	/* sizeof tells you how many bytes a type takes up. */
	printf("a char is %zu byte(s)\n",   sizeof(char));
	printf("an int is %zu byte(s)\n",   sizeof(int));
	printf("a double is %zu byte(s)\n", sizeof(double));

	return 0;
}

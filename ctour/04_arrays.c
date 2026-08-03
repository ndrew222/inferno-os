/* Arrays: a numbered row of same-typed values. Counting starts at 0. */

#include <stdio.h>

int main(void)
{
	int  numbers[4] = {10, 20, 30, 40};
	int  i;

	printf("numbers[0] = %d\n", numbers[0]);
	printf("numbers[3] = %d\n", numbers[3]);

	/* A "for" loop. Three parts, separated by semicolons:
	 *   start here ; keep going while this is true ; do this each time round
	 * i++ means "add 1 to i".
	 */
	for(i = 0; i < 4; i++)
		printf("numbers[%d] = %d\n", i, numbers[i]);

	return 0;
}

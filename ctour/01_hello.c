/* The smallest complete C program.
 *
 * Build and run:
 *     gcc 01_hello.c -o 01_hello
 *     ./01_hello
 */

#include <stdio.h>      /* pulls in printf, like an import statement */

int main(void)          /* every C program starts at main() */
{
	printf("hello\n");  /* \n is a newline */
	return 0;           /* 0 means "finished successfully" */
}

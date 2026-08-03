/* The payoff: a working miniature of Inferno's virtual machine.
 *
 * Everything here uses only what lessons 01-08 covered.
 * The macros and the addw function are copied from libinterp/xec.c
 * almost unchanged.
 */

#include <stdio.h>

typedef unsigned char BYTE;    /* 1 byte, as in include/interp.h */
typedef int           WORD;    /* 4 bytes */
typedef double        REAL;    /* 8 bytes */

/* The VM's registers. s, d and m are void* -- untyped addresses.
 * They point at slots holding the operands of the current instruction.
 */
struct REG
{
	void *s;    /* source      */
	void *d;    /* destination */
	void *m;    /* middle      */
};

struct REG R;   /* the one global register set */

/* The macro block from xec.c. Each one says
 * "the slot at that address, interpreted as this type".
 */
#define OP(fn)  void fn(void)
#define B(r)    *((BYTE*)(R.r))
#define W(r)    *((WORD*)(R.r))
#define F(r)    *((REAL*)(R.r))

/* Three real Inferno instructions, verbatim from xec.c. */
OP(addw) { W(d) = W(m) + W(s); }
OP(addb) { B(d) = B(m) + B(s); }
OP(addf) { F(d) = F(m) + F(s); }

int main(void)
{
	WORD a = 20, b = 22, result = 0;
	REAL x = 1.5, y = 2.25, fresult = 0;

	/* Point the registers at our variables, exactly like the real
	 * decoder does before each instruction runs.
	 */
	R.m = &a;
	R.s = &b;
	R.d = &result;

	addw();     /* execute one VM instruction */

	printf("addw: %d + %d = %d\n", a, b, result);

	R.m = &x;
	R.s = &y;
	R.d = &fresult;

	addf();

	printf("addf: %f + %f = %f\n", x, y, fresult);

	return 0;
}

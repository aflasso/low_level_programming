#include "3-calc.h"
#include <stdio.h>

int main(void)
{
	int a,b,c,d,f;

	a = op_add(2,4);
	b = op_sub(4,2);
	c = op_mul(2,4);
	d = op_div(4,2);
	f = op_mod(4,2);

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", f);

return (1);
}

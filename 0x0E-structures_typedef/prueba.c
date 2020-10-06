#include <stdio.h>

struct mag
	{
	int num;
	int fech;
	int wehn;
	};

struct est
	{
	int dag;
	int vel;
	int mv;
	int def;
	struct mag fe;
	};

est yo = {43, 1, 5, 100, 1, 2, 3};


void main(void)
{

	printf("%d\n", yo.dag);
	printf("%d\n", yo.vel);
	printf("%d\n", yo.mv);
	printf("%d\n", yo.def);
	printf("%d\n", yo.fe.num);
	printf("%d\n", yo.fe.fech);
	printf("%d\n", yo.fe.wehn);
}

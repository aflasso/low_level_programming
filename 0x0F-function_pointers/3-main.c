#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}


	if ((*argv[2] == 47 || *argv[2] == 37) && *argv[3] == 48)
	{
		printf("ERROR\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	function = get_op_func(argv[2]);

	if (function == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", function(a, b));
	return (0);
}

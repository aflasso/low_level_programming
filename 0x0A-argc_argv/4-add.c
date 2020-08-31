#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: number of arguments
* @argv: array of char that contains the arguments inside a string
* Return: 1 if there is a no digit character otherwise return 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int p = 1;

	if (argc <= 1)
	{
		printf("0\n");
	}
	while (argc > 1)
	{
		if (*(argv[p]) >= 48 && *(argv[p]) <= 57)
		{
			sum = sum + atoi(argv[p]);
			p++;
			argc--;
		}
		else
		{
			printf("ERROR\n");
			return (1);
		}
	}
	if (argc == 1)
	{
		printf("%d\n", sum);
	}
	return (0);
}

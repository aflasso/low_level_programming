#include <stdio.h>

/**
* main - prints all arguments it recive
* @argc: number of arguments
* @argv: array char that contains the parameters inside a string
* Return: Always 0
*/

int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv);
		argv++;
		argc--;
	}
	return (0);
}

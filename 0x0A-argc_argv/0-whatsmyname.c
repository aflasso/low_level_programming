#include <stdio.h>

/**
* main - prints the name of the program
* @argc: number of arguments
* @argv: array char that contains the arguments inside a string
* Return: always 0
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

#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: the number of arguments
* @argv: Array char that contains the parameters inside a string
* Return: if the program doesnt recives two arguments return 1.
* otherwise return 0
*/

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		printf("%d\n", a * b);
	}
	return (0);
}

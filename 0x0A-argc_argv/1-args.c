#include <stdio.h>

/**
* main - prints the number of arguments passsed to the program
* @argc: the number of arguments
* @argv: array char that contains the arguments inside a string
* Return: Always 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);

	return (0);
}

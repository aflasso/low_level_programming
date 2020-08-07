#include <stdio.h>

/**
* main - prints all the numbers from 1 to 100
* replacing the multiples of three to "Fizz"
* the multiples of five to "Buzz"
* and the multiples of three and five to "FizzBuzz"
* Return: always 0
*/

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", number);
		}

		number++;
	}
	putchar('\n');
	return (0);
}

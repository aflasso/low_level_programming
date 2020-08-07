#include <stdio.h>

int main(void)
{

char c;
int i;
long int lf;
long long int llf;
float f;

	printf("Sizeof a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Sizeof a int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Sizeof a long int: %lu byte(s)\n", (unsigned long)sizeof(lf));
	printf("Sizeof a long long int: %lu byte(s)\n", (unsigned long)sizeof(llf));
	printf("Sizeof a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

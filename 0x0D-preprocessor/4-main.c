#include <stdio.h>
#include "4-sum.h"

/**
 * main - check the code for Holberton School students.
  *
   * Return: Always 0.
    */
    int main(void)
    {
    #ifndef SUM
    	printf("The macro 'SUM' is not defined\n");
		return (1);
		#else
			printf("%d\n", SUM(2048, 4096) * 5);
				return (0);
				#endif
				}

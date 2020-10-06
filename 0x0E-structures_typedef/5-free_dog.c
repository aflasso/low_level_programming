#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_dog - frees the memory of the struct dog
* @d: the struct to be freied
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(-1);
	}
	free(d->name);
	free(d->owner);
	free(d);
}

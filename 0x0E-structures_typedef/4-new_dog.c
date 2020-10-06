#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *);

/**
* new_dog - creates a new dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
* Return: a pointer to the new struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lenname;
	int lenowner;
	char *newname;
	char *newowner;
	int p = 0;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	lenname = _strlen(name);

	newname = malloc(sizeof(*name) * (lenname + 1));

	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	lenowner = _strlen(owner);

	newowner = malloc(sizeof(*owner) * (lenowner + 1));

	if (newowner == NULL)
	{
		free(newdog);
		free(newname);
		return (NULL);
	}

	while (name[p] != '\0')
	{
		newname[p] = name[p];
		p++;
	}
	p = 0;

	while (owner[p] != '\0')
	{
		newowner[p] = owner[p];
		p++;
	}

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}

/**
* _strlen - returns the length of a string
* @str: the string to be checked
* Return: the length of the string
*/
int _strlen(char *str)
{
	int p = 0;
	int lg = 0;

	while (str[p] != '\0')
	{
		p++;
		lg++;
	}
	return (lg);
}

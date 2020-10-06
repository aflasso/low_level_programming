#ifndef holberton_h
#define holberton_h

/**
* struct dog - information of a dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
*/
struct dog
	{
	char *name;
	float age;
	char *owner;
	};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *d);


#endif

#ifndef holberton
#define holberton

#include <stdarg.h>
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);


/**
* struct form - choose wich function will be used
* @op: diferent situations
* @f: the function to be choosed in each situation
*/
typedef struct form
{
	char *op;
	void (*f)(va_list a);
} form_t;

#endif

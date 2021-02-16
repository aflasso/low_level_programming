#ifndef holberton
#define holberton

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
int _pow(int, int);

void print_binary(unsigned long int);

int get_bit(unsigned long int, unsigned long int);

int set_bit(unsigned long int *, unsigned int);

int clear_bit(unsigned long int *, unsigned int);

unsigned int flip_bits(unsigned long int, unsigned long int);

#endif
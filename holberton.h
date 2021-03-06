#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct types - Handle the specifiers and his match function
 *
 * @specifier: The char specifier
 * @solver: Manages what must be done with each specifier
 */

typedef struct types
{
	char *specifier;
	void (*solver)(va_list, int *);

} spec_assign;

int length(const char *string);
int *indexer(int *sizeofindex, const char *format, ...);
void assigner(va_list args, char speci, int *len);
int _printf(const char *format, ...);

void print_c(va_list argument, int *length);
void print_s(va_list argument, int *len);
void print_d(va_list argument, int *len);
void print_b(va_list argument, int *len);
void print_o(va_list argument, int *len);
void print_x(va_list argument, int *len);
void print_X(va_list argument, int *len);
void print_R(va_list argument, int *len);
void print_r(va_list argument, int *len);
void print_unasigned(va_list argument, int *length);

char *int_to_string(int number);
int pot(int x, int y);
long absolute(long n);
char *write_null();
void reverse_array(int *a, int n);
void rev_string(char *s);
int _strcmp(char *s1, char *s2);
char *hex_maker(int *hex, int j);
void print_array_int(int *array, int size, int *len);
void upper(char *string);
void ROT13(char *msg, int *len);
#endif /*!HOLBERTON_H*/

#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
size_t _strlen(const char *s);
/**
 * struct TypesArguments - structs of Function pointers.
 * @type: First parameter.
 * @function: Funtion pointer.
 */
typedef struct TypesArguments
{
	char *type;
	int (*function)(va_list valist);

} TypesArgs;

int _printf(const char *format, ...);
unsigned int check_format(unsigned int *pi, const char *format, va_list list);
int print_c(va_list valist);
int print_s(va_list valist);
int print_p(va_list valist);
int print_num(va_list valist);
int print_b(va_list list);
#endif

#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
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
int print_c(va_list valist);
int print_s(va_list valist);
int print_p(va_list valist);

#endif

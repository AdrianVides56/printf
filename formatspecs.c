#include "holberton.h"
/**
 * strlen - measure the lenght of a string
 * @s: string
 * Return: length of th string
 */
size_t strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * print_c - prints a single character
 * @list: variable to an arguments list
 * Return: 1
 */
int print_c(va_list list)
{
	char c = (char)va_arg(list, int);

	_putchar(c);
	return (1);

}

/**
 * print_s - prints strings
 * @list: variable to an arguments list
 * Return: 1
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char*);
	size_t slen = strlen(str);

	write(1, str, slen);
	return (slen - 1);

}

/**
 * print_p - prints a percent sign
 * @list: variable to an arguments list
 * Return: 1
 */
int print_p(va_list __attribute__((unused)) list)
{
	/* char p = (char)va_arg(list, int); */
	_putchar(37);
	return (1);
}

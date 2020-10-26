#include "holberton.h"
/**
 * _strlen - measure the lenght of a string
 * @s: string
 * Return: length of th string
 */
size_t _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
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
	size_t slen = _strlen(str);

	write(1, str, slen);
	return (slen);

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

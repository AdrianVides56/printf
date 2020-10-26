#include "holberton.h"

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

/**
 * print_num - Print a number > 0 or < 0.
 * @list:variable to an arguments list.
 * Return: Length of printed number
 */
int print_num(va_list list)
{
	unsigned int decena, unidad;
	int num = va_arg(list, int), len = 0;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1; /* Si el numero es menor a 0 cambia el signo*/
		len++;
	}
	decena = 1;
	unidad = num;

	while (unidad > 9)
	{
		decena *= 10;
		unidad /= 10;
	}

	for (; decena >= 1; decena /= 10)
	{
		_putchar(((num / decena) % 10) + '0');
		len++;
	}

	return (len);
}

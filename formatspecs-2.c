#include "holberton.h"

/**
 * print_b - convert a positive number to binary and prints it
 * @list: variable to an arguments list
 * Return: number of bytes
 */
int print_b(va_list list)
{
	unsigned int mod[32], dividendo;
	int i = 0, x;

	dividendo = va_arg(list, int);
	if (dividendo == 0)
	{
		_putchar(48);
		return (1);
	}
	if (dividendo < 0)
		return (0);

	while (dividendo > 0)
	{
		mod[i] = dividendo % 2;
		dividendo = dividendo / 2;
		i++;
	}

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(mod[x] + '0');
	}

	return (i);
}

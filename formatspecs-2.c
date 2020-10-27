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

/**
 * print_rot13 - prints a string in rot 13
 * @list: variable to an argument list
 * Return: number of bytes
 */
int print_rot13(va_list list)
{
	char *str = va_arg(list, char*);
	int a, rec, count;
	int difchar;
	char orig[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
	{
		difchar = 0;
		for (rec = 0; orig[rec] != '\0'; rec++)
		{
			if (str[a] == orig[rec])
			{
				_putchar(rot13[rec]);
				count++;
				difchar++;
			}
		}
		if (difchar == 0)
		{
			_putchar(str[a]);
			count++;
		}
	}
	return (count);
}

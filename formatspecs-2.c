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
	int a, rec, count = 0;
	int difchar = 0;
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


/**
 * print_r - prints the reversed string.
 * @list: variable to an arguments list
 * Return: number of bytes.
 */
int print_r(va_list list)
{
	int i, len;
	char *s = va_arg(list, char*);

	if (s == NULL)
		s = "(null)";

	len = _strlen(s);

	for ((i =  len - 1); i >= 0; i--)
		_putchar(s[i]);

	return (len);
}

/**
 * print_u - prints unsigned int
 * @list: variable to an argument list
 * Return: number of bytes
 */
int print_u(va_list list)
{
	int num = va_arg(list, int);
	int len = 0;
	unsigned int decena, unidad;

	decena = 1;
	unidad = num;

	if (num <= -1)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
	}
	else
	{
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
	}
	return (len);
}

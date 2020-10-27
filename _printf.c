#include "holberton.h"
/**
 * _printf - prints received arguments
 * @format: list of types of passed arguments
 * Return: 0 (Success)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list list;

	va_start(list, format);
	if (!(format) || format == NULL || format[i] == '\n' ||
	    format[i] == '\0' || (format[i] == '%' && !format[i + 1]))
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			count += check_format(&i, format, list);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}

/**
 * check_format -select the correct function asked for
 * @pi: pointer to format position
 * @format: parameters passed
 * @list: to print
 * Return: number of bytes called by the selected funcion
 */
unsigned int check_format(unsigned int *pi, const char *format, va_list list)
{
	int i = *pi, l = 0, j;
	int count = 0;

	TypesArgs formatArg[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_p },
		{ "d", print_num },
		{ "i", print_num },
		{ "b", print_b },
		{ "R", print_rot13 },
		{ "r", print_r }
	};

	j = 0;
	while (j < 8)
	{
		if (*(formatArg[j].type) == format[i + 1])
		{
			count += formatArg[j].function(list);
			*pi += 1;
		}
		else
		{
			l++;
		}
		j++;
	}
	if (l == 8)
	{
		_putchar(format[i]);
		count++;
	}
	return (count);
}

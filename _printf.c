#include "holberton.h"
/**
 * _printf - prints received arguments
 * @format: list of types of passed arguments
 * Return: 0 (Success)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j;
	va_list list;

	TypesArgs formatArg[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_p },
		{ "d", print_n },
		{ "i", print_n }
	};

	if (format == NULL)
		return (0);

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 3)
		{
			if (format[i] == '%' && (format[i + 1] ==
						 *(formatArg[j].type)))
				formatArg[j].function(list);
			j++;
		}
		if (format[i] == '%')
		{
			i += 2;
			continue;
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}

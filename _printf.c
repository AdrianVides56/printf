#include "holberton.h"
/**
 * _printf - prints received arguments
 * @format: list of types of passed arguments
 * Return: 0 (Success)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j, count = 0;
	va_list list;

	TypesArgs formatArg[] = {
		{ "c", print_c },
		{ "s", print_s },
		{ "%", print_p },
		{ "d", print_n },
		{ "i", print_n }
	};
	if (!(format) || format == NULL || format[i] == '\n' ||
	    format[i] == '\0' || (format[i] == '%' && !format[i + 1]))
		return (-1);
	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == '%' && (format[i + 1] == *(formatArg[j].type)))
				count += formatArg[j].function(list);
			j++;
		}
		if (format[i] == '%' && (format[i + 1] == '\n' || format[i + 1] == ' '))
		{
			_putchar('%');
			_putchar('\n');
		}
		if (format[i] == '%')
			i++;
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	//printf("%d", count);
	return (count);
}

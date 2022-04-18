#include "main.h"

/**
* _printf - produces output according to a format
* @format: a character string
*
* Return: number of characters to be printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			len += _putchar(format[i]);
			i++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			len = get_print_func(format[i], format[i - 1], args, len);
			i++;
		}
	}

	va_end(args);

	return (len);
}

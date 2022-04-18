#include "main.h"

/**
* print_string - prints a string.
* @args: list of arguments.
* @len: nuber of characters.
*
* Return: new length of the string.
*/
int print_string(va_list args, int len)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
		len += _putchar(*str++);

	return (len);
}

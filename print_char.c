#include "main.h"

/**
* print_char - prints char to stdout
* @args: argument list
* @len: string length
*
* Return: len
*/
int print_char(va_list args, int len)
{
	int c = va_arg(args, int);

	len += _putchar(c);
	return (len);
}

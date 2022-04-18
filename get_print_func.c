#include "main.h"

/**
* get_print_func - gets required print function and returns a pointer to it.
* @c: current char
* @b: previous char
* @args: list of arguments.
* @len: number of chars printed.
*
* Return: pointer to correct print function.
*/
int get_print_func(char c, char b, va_list args, int len)
{
	switch (c)
	{
		case 'c':
			len = print_char(args, len);
			break;
		case 's':
			len = print_string(args, len);
			break;
		case '%':
			len += _putchar(c);
			break;
		case 'd':
		case 'i':
			len = print_num(args, len);
			break;
		default:
			len += _putchar(b);
			len += _putchar(c);
			break;
	}
	return (len);
}

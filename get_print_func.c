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
		case 'b':
			len = print_binary(args);
			break;
		case 'o':
			len = print_octal(args);
			break;
		case 'x':
			len = print_hexa(args);
			break;
		case 'X':
			len = print_heX(args);
			break;
		case 'u':
			len = print_ui(args);
			break;
		case 'p':
			len = print_pointer(args);
			break;
		case 'R':
			len = print_rot(args);
			break;
		case 'r':
			len - print_rev(args);
			break;
		default:
			len += _putchar(b);
			len += _putchar(c);
			break;
	}
	return (len);
}

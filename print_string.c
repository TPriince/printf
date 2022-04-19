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
/**
 * print_rot - traduce letras a rot13
 * @args: string
 * Return: i which is the counter of characters
 */
int print_rot(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				_putchar(str[i] + 13);
			}
			else
			{
				_putchar(str[i] - 13);
			}
		}
		else
		{
			_putchar(str[i]);
		}
		i++;
	}
	return (i);
}
/**
* print_rev - print string in reverse
* @args: char
* Return: length
*/
int print_rev(va_list args)
{
	char *cadena;
	int i = 0, cont = 0;

	cadena = va_arg(args, char*);
	if (cadena != NULL)
	{
		if (cadena[0] == '\0')
			return (0);

		while (cadena[i] != '\0')
			i++;

		cont = i;

		for (i--; i >= 0; i--)
			_putchar (cadena[i]);
	}
	else
		return (0);
return (cont);
}

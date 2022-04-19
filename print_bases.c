#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts a number from base 10 to binary
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list args)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
/**
 * rec_oct - function
 * @num: number
 */
void rec_oct(unsigned int num)
{
	if (num / 8)
	{
		rec_oct(num / 8);
		_putchar(num % 8 + '0');
	}
	else
		_putchar(num % 8 + '0');
}

/**
 * print_octal - converts a number from base 10 to base 8
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_octal(va_list args)
{
	unsigned int num;
	long int iter;

	num = va_arg(args, unsigned int);
	rec_oct(num);
	for (iter = 0; num / 8; iter++)
		num = num / 8;
	return (iter + 1);
}

/**
 * rec_hexa - function that gives you the hexa number
 * @num: user given number
 */
void rec_hexa(unsigned int num)
{
	int dif;

	if (num / 16)
	{
		rec_hexa(num / 16);
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar((dif + 1) + '_');
		}
		else
			_putchar(num % 16 + '0');
	}
	else
	{
		if (num % 16 > 9 && num % 16 < 16)
		{
			dif = (num % 16) - 9;
			_putchar((dif + 1) + '_');
		}
		else
			_putchar(num % 16 + '0');

	}
}
/**
 * print_hexa - converts a number from base 10 to hexadecimal
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_hexa(va_list args)
{
	long int num;
	unsigned int iter;

	iter = va_arg(args, unsigned int);

	rec_hexa(iter);

	for (num = 0; iter / 16; num++)
	{
		iter = iter / 16;
	}
	return (num + 1);
}

/**
 * print_heX - Prints a representation of a decimal number on base16 Uppercase
 * @list: List of the arguments passed to the function
 * Return: Number of characters printed
 */
int print_heX(va_list args)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);
	return (len);
}

/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
/**
 * print_hexa_pointer - function that prints the hexa number
 * @num: alias of the list of parameters
 * Return: iter + 1, total amount of chars
 */
void print_hexa_pointer(unsigned long num)
{
	int dif;

	if (num / 16)
	{
		rec_hexa(num / 16);
		if (num % 16 > 9 && num % 16 <= 16)
		{
			dif = (num % 16) - 9;
			_putchar((dif + 1) + '_');
		}
		else
			_putchar(num % 16 + '0');
	}
	else
	{
		if (num % 16 > 9 && num % 16 < 16)
		{
			dif = (num % 16) - 9;
			_putchar((dif + 1) + '_');
		}
		else
			_putchar(num % 16 + '0');

	}
}
/**
 * print_pointer - prints pointer
 * @args: va_list
 * Return: int.
 */
int print_pointer(va_list args)
{
	unsigned long i = va_arg(args, unsigned long);
	int num = 0, cont = 0;

	if (i == 0)
	{
		return (_printf("(nil)"));
	}

	cont += _putchar('0');
	cont += _putchar('x');
	print_hexa_pointer(i);
	for (num = 0; i / 16; num++)
	{
		i = i / 16;
	}
	return ((num + cont) + 1);
}

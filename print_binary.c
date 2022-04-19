#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bin - function that prints binary
 * @num: number converted to binary
 */
void get_bin(unsigned int num)
{
	if (num / 2)
	{
		get_bin(num / 2);

		_putchar(num % 2 + '0');
	}
	else
		_putchar(num % 2 + '0');
}

/**
 * print_binary - function that handles binary
 * @args: args
 * Return: length
 */
int print_binary(va_list args)
{
	unsigned int num;

	int i;

	num = va_arg(args, unsigned int);

	get_bin(num);

	for (i = 0; num / 2; i++)
		num = num / 2;

	return (i + 1);
}

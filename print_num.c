#include "main.h"

/**
* find_length - counts length of chars to be printed.
* @n: unsigned int.
* @base: base of number.
*
* Return: length
*/
unsigned int find_length(unsigned int n, int base)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		n = n / base;
		if (n == 0)
			break;
		count++;
	}
	return (count);
}

/**
* print_numbers - prints numbers according to specified base.
* @n: number to print.
* @base: the base to print.
* @digits: digits found in this base.
*
* Return: lenth of characters.
*/
int print_numbers(unsigned long n, unsigned int base, const char *digits)
{
	if (n >= base)
		print_numbers((n / base), base, digits);
	_putchar(digits[n % base]);
	return (find_length(n, base) + 1);
}

/**
* putchar_int - prints integers
* @n: number.
* @len: string length
*
* Return: new length of the string.
*/
int putchar_int(int n, int len)
{
	unsigned long num;

	if (n < 0)
	{
		len += _putchar(45);
		num = -(unsigned int)n;
	}
	else
	{
		num = n;
	}
	len += print_numbers(num, 10, "0123456789");

	return (len);
}

/**
* print_num - print int to STDOUT
* @args: list of arguments.
* @len: length of string so far.
*
* Return: new string length.
*/
int print_num(va_list args, int len)
{
	int n;

	n = va_arg(args, int);

	len = putchar_int(n, len);
	return (len);
}

/*PRINT UNSIGNED INT*/
/**
 * print_ui - print unsigned integers
 * @args: list of arguments
 *
 * Return: no of chaaracters
 */
int print_ui(va_list args)
{
	int count = 0;

	int n = va_arg(args, int);

	unsigned int dc, dig, nat = n;

	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		while (f <= nat)
			f *= 10;

		dc = f / 10;

		while (dc >= 1)
		{
			dig = nat / dc;
													_putchar(dig + '0');
													nat = (nat - (dc * dig));
													dc /= 10;
													count++;
												}
	}
	return (count);
}

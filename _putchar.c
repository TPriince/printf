#include "main.h"
#include <unistd.h>
/**
* _putchar - prints character passed to it.
* @c: char to be printed.
*
* Return: int
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int get_print_func(char c, char b, va_list args, int len);
int print_char(va_list args, int len);
int print_string(va_list args, int len);
int print_num(va_list args, int len);
unsigned int find_length(unsigned int n, int base);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
int putchar_int(int n, int len);



#endif

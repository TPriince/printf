#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int get_print_func(char c, char b, va_list args, int len);
int print_char(va_list args, int len);
int print_string(va_list args, int len);
int print_num(va_list args, int len);
unsigned int find_length(unsigned int n, int base);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
int putchar_int(int n, int len);

int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);

char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);


#endif

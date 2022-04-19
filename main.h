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
int print_ui(va_list args);

int print_binary(va_list args);
int print_octal(va_list args);
int print_hexa(va_list args);
int print_heX(va_list args);
int hex_check(int num, char x);
void rec_hexa(unsigned int num);
int print_pointer(va_list args);

char *rev_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);


#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct formatter - use specifier character to access correct function
 * @c: specifier character
 * @f: function pointer to corresponding function
 */
typedef struct formatter
{
	char c;
	int (*f)(va_list);
} fmt;

int _printf(const char *format, ...);
int dec_to_bin(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_num(va_list args);
int print_number(int n, int l);
int _putchar(char c);
int format_str(const char *format, fmt spec[], va_list args);
int format_str2(const char *format, fmt spec[], va_list args);
char *dec_to_hex(unsigned int n);
int print_hex(va_list args);
int print_upperhex(va_list args);
int print_unsigned(va_list arg);
int print_unsig(unsigned int n);
char *string_to_upper(char *s);
int octal(unsigned int n, int l);
int print_octal(va_list args);
char *str_rev(char *s);
int print_rev(va_list args);
int print_rot13(va_list args);
int print_newhex(int num);
int print_nonprint(va_list args);
int print_add(va_list args);

int handle_flags(va_list args);
int handle_plus(va_list args);
int print_minus(va_list args);
int handle_width(va_list args);
int handle_hash(va_list args);
int handle_float(va_list args);
int handle_h(va_list args);
int handle_l(va_list args);
#endif

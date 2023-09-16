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
#endif

#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct spec_controller- checker constructor
 * @c: the data type
 * @f_ptr: pointer to the printer fucntion
 */
typedef struct spec_controller
{
char c;
int (*f_ptr)(va_list);
} spec_controller;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list ptr);
int print_c(va_list ch);
int print_int(va_list ptr);
char *_itoa(long int num, int base);
int print_binary(va_list ptr);
int _strlen(const char *s);
int print_hex(va_list ptr);
int print_un(va_list ptr);
int print_oct(va_list ptr);
char *string_toupper(char *s);
int print_hexU(va_list ptr);
#endif

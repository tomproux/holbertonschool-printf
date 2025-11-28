#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int print_digit(va_list args);
char _putchar(char c);

#endif

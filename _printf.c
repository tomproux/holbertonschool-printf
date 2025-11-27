#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int j = 0;
	char c;
	char *str;
	int d;
	int i;
	char less = '-';

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == 'c')
			{
				c = (char)va_arg(args, int);
				write(1, &c, 1);
				count++;
			}
			else if (format[j] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(null)";
				while (*str)
				{
					write(1, str, 1);
					str++;
					count++;
				}
			}
			else if (format[j] == 'd')
			{
				d = va_arg(args, int);
				if (d < 0)
				{
					write(1, &less, 1);
					write(1, &d, 1);
					count++;
				}
				else
				{
					write(1, &d, 1);
					count++;
				}
			}
			else if (format[j] == 'i')
			{
				i = va_arg(args, int);
				write(1, &i, 1);
				count++;
			}
			else if (format[j] == '%')
			{
				write(1, "%", 1);
				count++;
			}
			else
			{
				/* unknow character */
				write(1, "%", 1);
				write(1, &format[j], 1);
				count += 2;
			}
		}
		else
		{
			write(1, &format[j], 1);
			count++;
		}

		j++;
	}

	va_end(args);
	return (count);
}

#include "main.h"

int print_di(va_list args)
{
	int count = 0;
	long number = va_arg(args, int);
	long modulo = 10;
	long print_num, cp_num;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		count++;
	}
	if (number >= 0 && number <= 9)
	{
		count += _putchar(number + '0');
	}

	cp_num = number;

	if (number > 9)
	{
		while (number >= (modulo * 10))
		{
			modulo *= 10;
		}
		while (modulo >= 1)
		{
			print_num = cp_num / modulo;
			count += _putchar(print_num + '0');
			cp_num %= modulo;
			modulo /= 10;
		}
	}
	return (count);
}

#include "main.h"

void print_digit(va_list args)
{
	int number = va_args(args, int);
	int modulo = 10;

	if (number < 0)
	{
		write(1, "-", 1);
		write(1, &number, 1);
	}
	else if (number >= 0 && number < modulo)
	{
		write(1, &number, 1);
	}
	else
	{
		while (number >= (modulo * 10))
		{
			modulo *= 10;
		}
		while (modulo >= 1)
		{
			write(1, &number, 1);
			modulo /= 10;
		}
		write(1, &number, 1);
	}
}

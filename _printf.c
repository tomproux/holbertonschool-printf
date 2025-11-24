#include "main.h"

/**
* _printf- equivalent de la fonction printf
* @format: chaine de caractere transmise en parametre
*
* Return the string lenght
*/
int _printf(const char *format, ...)
{
	int len;

	if (format == NULL)
	{
		puts("Error transmission");
	}
	len = puts(*format);

	return (len);
}

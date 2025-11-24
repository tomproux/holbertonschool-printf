#include "main.h"

/**
* _printf- equivalent de la fonction printf
* @format: chaine de caractere transmise en parametre
*
* Return the string lenght
*/
int _printf(const char *format, ...)
{
	int stringLen;

	if (format == NULL)
	{
		puts("Error transmission");
	}
	stringLen = puts(*format);

	return (stringLen);
}

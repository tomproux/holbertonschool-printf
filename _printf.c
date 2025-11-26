#include "main.h"

/**
* _printf- equivalent de la fonction printf
* @format: chaine de caractere transmise en parametre
*
* Return the string lenght
*/
int _printf(const char *format, ...)
{
	if (*format == NULL)
		return (NULL);
	
	elseif (*format < 0)
		return (-1);
	
	else
	{
		if (args == 0)
		{
			puts(format);
			return strlen(format);
		}
		else
		{
			/*remplacer %... par la valeur de args
			?*/
			puts(format);
			return (strlen(format));
		}
	}
}

# TITRE DU PROJET #

PRINTF

# EXPLICATION PRINTF #

In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen).

# DESCRIPTION #

The printf() function is defined inside <stdio.h> header file.

	printf("format_string", args...);

Parameter:
1. formatted_string: It is a string that specifies the data to be printed. It may also contain a format specifier as a placeholder to print the value of any variable or value.
2. args...: These are the variable/values corresponding to the format specifier.

Return Value:
1. Returns the number of characters printed after successful execution.
2. If an error occurs, a negative value is returned.

# EXEMPLE D'UTILISATION DE LA FONCTION PRINTF #
	#include <stdio.h>
	int main()
	{ 
		/*Using printf to print the text "Hi!"*/
		printf("Hi!");
		return 0;
	}
Output
Hi!

Explanation: In this program, the printf function print the text "Hi!" on the console screen.

# COMMANDE COMPILE #

	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

# DIAGRAMME DU FLOWCHART #

	start
	read a string
	if string == NULL
		return NULL
	finif
	elseif string < 0
		return -1
	finelseif
	elseif string == 0
		return 0
	finelseif
	else
		if args == 0
			display string
			return string lenght
		finif
		elseif args > 0
			remplacer %... par la valeur de args
			display string
			return string lenght
		finelseif
		else
			return err
		finelse
	finelse
	stop

# AUTHOR #

@tomproux
https://github.com/tomproux

@arthurmoulard
https://github.com/arthurmoulard

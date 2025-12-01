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

<img width="566" height="729" alt="image" src="https://github.com/user-attachments/assets/963cdb74-198a-4ee4-ab44-9ad466576164" />

# AUTHOR #

@tomproux
https://github.com/tomproux

@arthurmoulard
https://github.com/arthurmoulard

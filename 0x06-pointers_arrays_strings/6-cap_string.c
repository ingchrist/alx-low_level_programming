#include "main.h"

/**
 * cap_string - Capitalize all word of  string.
 * @str: The string to be capitalize.
 *
 * Return: A pointer to the change string.
 */
char *cap_string(char *str)
{
	int wz = 0;

	while (str[wz])
	{
		while (!(str[wz] >= 'a' && str[wz] <= 'z'))
			wz++;

		if (str[wz - 1] == ' ' ||
		    str[wz - 1] == '\t' ||
		    str[wz - 1] == '\n' ||
		    str[wz - 1] == ',' ||
		    str[wz - 1] == ';' ||
		    str[wz - 1] == '.' ||
		    str[wz - 1] == '!' ||
		    str[wz - 1] == '?' ||
		    str[wz - 1] == '"' ||
		    str[wz - 1] == '(' ||
		    str[wz - 1] == ')' ||
		    str[wz - 1] == '{' ||
		    str[wz - 1] == '}' ||
		    wz == 0)
			str[wz] -= 32;

		wz++;
	}

	return (str);
}


#include "main.h"
#include <stdio.h>

/**
 * rot13 - encod rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int wz;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (wz = 0; wz < 52; wz++)
		{
			if (s[i] == data1[wz])
			{
				s[i] = datarot[wz];
				break;
			}
		}
	}
	return (s);
}


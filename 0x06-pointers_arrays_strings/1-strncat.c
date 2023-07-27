#include "main.h"

/**
 * _strncat - concatenate two string
 *
 * @src: The source string
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer prints to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, z;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (z = 0; src[z] != '\0' && z < n; z++)
	{
		dest[i + z] = src[z];
	}
	dest[i + z] = '\0';
	return (dest);
}


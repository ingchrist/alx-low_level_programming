#include "main.h"
/**
 * _strncat - concatenat two string
 * using at most n byte from src
 * @dest: input valu
 * @src: input valu
 * @n: input valu
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int z;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
	dest[i] = src[z];
	i++;
	z++;
	}
	dest[i] = '\0';
	return (dest);
}


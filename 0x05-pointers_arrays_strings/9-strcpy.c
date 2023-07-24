#include "main.h"
/**
 * _strcpy - copy the string point to by @src
 * to the buffer point to by @dest
 *
 * @src: pointer to the strings to copy
 * @dest: pointer to the destination buffer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


#include "main.h"
/**
 * _strncpy - copy  string
 * @dest: input valu
 * @src: input valu
 * @n: input valu
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int wz;

	wz = 0;
	while (wz < n && src[wz] != '\0')
	{
		dest[wz] = src[wz];
		wz++;
	}
	while (wz < n)
	{
		dest[wz] = '\0';
		wz++;
	}

	return (dest);
}


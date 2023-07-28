#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int wz;

	wz = 0;
	while (s1[wz] != '\0' && s2[wz] != '\0')
	{
		if (s1[wz] != s2[wz])
		{
			return (s1[wz] - s2[wz]);
		}
	wz++;
	}
	return (0);
}


#include "main.h"
/**
 * leet - encod into 1337speak
 * @n: input valu
 * Return: n valu
 */
char *leet(char *n)
{
	int i, wz;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (wz = 0; wz < 10; wz++)
		{
			if (n[i] == s1[wz])
			{
				n[i] = s2[wz];
			}
		}
	}
	return (n);
}


#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int length = 0;
	char sr[500];
	char *p = s;
	int j = 0, i = 0;

	while (s[length] != 0)
	{
		length++;
	}
	i = length - 1;

	while (j < length)
	{
		sr[j] = s[i];
		j++;
		i--;
	}
	for (i = 0; i < length; i++)
	{
		*p = sr[i];
		p++;
	}
}

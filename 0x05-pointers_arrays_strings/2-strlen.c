#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	for (; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}

#include "main.h"
/**
 *_memset - fill a block  memory with  specific value
 *@s: starting address of memory to filled
 *@b: the desired valu
 *@n: number of bytes to  change
 *
 *Return: changed array with new value for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int wz = 0;

	for (; n > 0; wz++)
	{
		s[wz] = b;
		n--;
	}
	return (s);
}


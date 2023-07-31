#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is store
 *@src: memory where is copi
 *@n: number of byte
 *
 *Return: copied memory with n byted change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int wz = 0;
int i = n;

for (; wz < i; wz++)
{
dest[wz] = src[wz];
n--;
}
return (dest);
}


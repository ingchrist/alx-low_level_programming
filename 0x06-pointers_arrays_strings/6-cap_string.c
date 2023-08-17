

#include "main.h"
/**
 *  * cap_string - capitaliz all word in a string
 *   * @s: string to capitaliz
 *    *
 *     * Return: address of s
 */
char *cap_string(char *s)
{
int i = 0, wz;
char a[] = " \t\n,;.!?\"(){}";
while (*(s + i))
{
if (*(s + i) >= 'a' && *(s + i) <= 'z')
{
if (i == 0)
*(s + i) -= 'a' - 'A';
else
{
for (wz = 0; wz <= 12; wz++)
{
if (a[wz] == *(s + i - 1))
*(s + i) -= 'a' - 'A';
}
}
}
i++;
}
return (s);
}


#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entries
 * @ac: int inputs
 * @av: double pointer arrays
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int wz, xz, r = 0, l = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (wz = 0; wz < ac; wz++)
{
for (xz = 0; av[wz][wz]; xz++)
l++;
}
l += ac;

str = malloc(sizeof(char) * l + 1);
if (str == NULL)
return (NULL);
for (wz = 0; wz < ac; wz++)
{
for (xz = 0; av[wz][xz]; xz++)
{
str[r] = av[wz][xz];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}


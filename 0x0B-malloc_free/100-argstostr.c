#include <stdlib.h>

/**
 * argstostr - allocate memory for concat of an array of strings
 * @ac: number of strings
 * @av: array of strings
 * Return: pointer to string concat
 */
char *argstostr(int ac, char **av)
{
int wz, c, i = 0, len = 0;
char *p;

if (ac <= 0 || av == NULL)
return (NULL);
for (wz = 0; wz < ac; wz++)
{
for (c = 0; av[wz][c]; c++)
;
len += c + 1;
}
p = malloc(len + 1);
if (p != NULL)
{
for (wz = 0; wz < ac; wz++)
{
for (c = 0; av[wz][c]; c++, i++)
p[i] = av[wz][c];
p[i++] = '\n';
}
p[i] = '\0';
}
return (p);
}
           
      
     
            


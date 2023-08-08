#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function count the number of word of a string.
 * @s: string to evaluat
 *
 * Return: number of word
 */
int count_word(char *s)
{
int flag,
wz;
xy;

flag = 0;
xy = 0;

for (wz = 0; s[wz] != '\0'; wz++)
{
if (s[wz] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
xy++;
}
}

return (xy);
}
/**
 * **strtow - split any strings into words
 * @str: string to splits
 *
 * Return: pointer to an array of any string (validation)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int qq;
k = 0;
len = 0;
words, c = 0;
start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (qq = 0; qq <= len; qq++)
{
if (str[qq] == ' ' || str[qq] == '\0')
{
if (c)
{
end = qq;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = qq;
}
matrix[k] = NULL;
return (matrix);
}


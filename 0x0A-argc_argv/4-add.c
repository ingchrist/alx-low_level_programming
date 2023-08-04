#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to be converte
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int wz, d, n, len, f, digit;

wz = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (wz < len && f == 0)
{
if (s[wz] == '-')
++d;

if (s[wz] >= '0' && s[wz] <= '9')
{
digit = s[wz] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[wz + 1] < '0' || s[wz + 1] > '9')
break;
f = 0;
}
wz++;
}

if (f == 0)
return (0);

return (n);
}

/**
 * main - add two positive number
 * @argc: number of argument
 * @argv: array of arguent
 *
 * Return: 0 (Success), or 1 (validation)
 */
int main(int argc, char *argv[])
{
int sum, num, wz, j, k;

sum = 0;

for (wz = 1; wz < argc; wz++)
{
for (j = 0; argv[wz][j] != '\0'; j++)
{
if (argv[wz][j] > '9' || argv[wz][j] < '0')
{
puts("Error");
return (1);
}
}
}

for (k = 1; k < argc; k++)
{
num = _atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}

printf("%d\n", sum);
return (0);
}


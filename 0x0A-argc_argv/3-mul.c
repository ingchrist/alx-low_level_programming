#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to converte
 *
 * Return: the int converted from the strings
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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int result;

int numb1;

int numb2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

numb1 = _atoi(argv[1]);

numb2 = _atoi(argv[2]);

result = numb1 *numb2;

printf("%d\n", result);

return (0);
}


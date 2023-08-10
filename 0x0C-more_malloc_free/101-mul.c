#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - multiplies positive numbers
 * @argc: n argument
 * @argv: args
 * Return: int on success
**/

int main(int argc, char *argv[])
{
unsigned long mul;
int i, wz;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (i = 1; i < argc; i++)
{
for (wz = 0; argv[i][wz] != '\0'; wz++)
{
if (argv[i][wz] > 57 || argv[i][wz] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", mul);
return (0);
}

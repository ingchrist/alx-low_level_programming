#include <stdio.h>
#include "main.h"

/**
 * main - print all argument it receives
 * @argwz: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (validation)
 */
int main(int argwz, char *argv[])
{
	int wz;

for (wz = 0; wz < argwz; wz++)
{
printf("%s\n", argv[wz]);
}

return (0);
}


#include <stdio.h>
#include "main.h"

/**
 * main - print the number of argument pass to the program
 * @wz: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (validation)
 */
int main(int wz, char *argv[] __attribute__((unused)))
{
printf("%d\n", wz - 1);
return (0);
}


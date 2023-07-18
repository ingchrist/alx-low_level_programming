#include "main.h"
/**
 * print_alphabet_x10 - prints 10x all alphabet in lowercase form.
 *
 * Return: 0 validation.
 */
void print_alphabet_x10(void)
{
int counter = 0;
char letters;
while (counter++ <= 9)
{
for (letters = 'a'; letters <= 'z'; letters++)
_putchar(letters);
_putchar('\n');
}
}


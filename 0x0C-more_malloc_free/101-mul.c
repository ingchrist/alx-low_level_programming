#include "main.h"
/**
 * is_digit - checks if string contains non-digit char
 * @s: string to be evaluate
 *
 * Return: 0 if a non-digit is found, 1 otherwis
 */
int is_digit(char *s)
{
int wz;

for (wz = 0; s[wz]; wz++)
if (s[wz] < '0' || s[wz] > '9')
return (0);
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int index = 0;

while (s[index] != '\0')
index++;
return (index);
}
/**
 * errors - errors handler for main
 * print error, newline and exit 98
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int l1, l2, wz, carry, firstNumber, secondNumber, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();

result = malloc(sizeof(int) * (_strlen(s1) + _strlen(s2) + 1));
if (result == NULL)
return (1);
for (wz = 0; wz <= (_strlen(s1) + _strlen(s2)); wz++)
result[wz] = 0;
for (l1 = _strlen(s1) - 1; l1 >= 0; l1--)
{
firstNumber = s1[l1] - '0';
carry = 0;
for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
{
secondNumber = s2[l2] - '0';
carry += result[l1 + l2 + 1] + (firstNumber *secondNumber);
result[l1 + l2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[l1 + l2 + 1] += carry;
}
for (wz = 0; wz < (_strlen(s1) + _strlen(s2)); wz++)
{
if (result[wz])
a = 1;
if (a)
_putchar(result[wz] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}


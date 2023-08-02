#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is prime number or not
 * @n: number to evaluat
 *
 * Return: 1 if n is prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @wz: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int wz)
{
if (wz == 1)
return (1);
if (n % wz == 0 && wz > 0)
return (0);
return (actual_prime(n, wz - 1));
}


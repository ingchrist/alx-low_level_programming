#include "main.h"

int actual_sqrt_recursion(int wz, int i);

/**
 * _sqrt_recursion - returns natural square root of number
 * @wz: number to calculate the squar root of
 *
 * Return: the resulting square root of number
 */
int _sqrt_recursion(int wz)
{
if (wz < 0)
return (-1);
return (actual_sqrt_recursion(wz, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @wz: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int wz, int i)
{
if (i * i > wz)
return (-1);
if (i * i == wz)
return (i);
return (actual_sqrt_recursion(wz, i + 1));
}


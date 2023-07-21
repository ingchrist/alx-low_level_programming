#include <stdio.h>
/**
 * main - Print out the larget prime factors of 612852475143
 * Return:return 0 after success.
 */
int main(void)
{
	long i;
	long number = 612852475143;

	for (i = 2; i < number; i++)
	{
		if (number % i == 0)
			number /= i;
	}
	printf("%li\n", number);
	return (0);
}

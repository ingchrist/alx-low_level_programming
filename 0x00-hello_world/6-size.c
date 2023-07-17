#include <stdio.h>
/**
 *description:  main - Prints  the size of various all data in  the computer
 * this program or algorithem is compiled on.
 * Return: 0 on success
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of all char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of all int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of all long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of all long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of all float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

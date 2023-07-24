#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define G_MIN 33
#define G_MAX 126
/**
 * main - generat valid password for 101-crackme
 * Return: 0 is run with succes
 */
int main(void)
{
	int sm = 2772;
	char c;

	srand(time(NULL));
	while (sm > G_MAX)
	{
		c = rand() % (G_MAX - G_MIN) + G_MIN;
		sm -= c;
		if (sm < G_MIN)
		{
			c -= (G_MIN -sm);
			sm = G_MIN;
		}
		putchar(c);
	}
	putchar(sm);
	return (0);
}


#include <stdio.h>


/**
 * main - finds then prints the som of the even valued terms.
 * follow by  new line
 * Return: Always 0 ON Success
 */
	int main(void)
	{
		int i;
		unsigned long int j, k, next, sOm;


		j = 1;
		k = 2;
		sOm = 0;


		for (i = 1; i <= 33; ++i)
		{
			if (j < 4000000 && (j % 2) == 0)
			{
				sOm = sOm + j;
			}
			next = j + k;
			j = k;
			k = next;
		}


		printf("%lu\n", sOm);


		return (0);
	}


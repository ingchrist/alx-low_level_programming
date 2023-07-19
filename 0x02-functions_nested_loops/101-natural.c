#include <stdio.h>


/**
* main - Lists all natural number below 1024
* list only  multiples of 3 or 5.
*
* Return: 0 on validation
*/
	int main(void)
	{
		int i, sum_of_mltpl = 0;


		for (i = 0; i < 1024; i++)
		{
			if ((i % 3) == 0 || (i % 5) == 0)
				sum_of_mltpl += i;
		}


		printf("%d\n", sum_of_mitpl);


		return (0);
	}


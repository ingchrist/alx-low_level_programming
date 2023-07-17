#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Determining whether the last digit of generated number is
 * greater than, less than 5, or zero.
(*
 * Return: 0 on validation
 */
int main(void)
{
	int n;
	char last[] = "Last number of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 but not 0\n");
	}
	return (0);

}

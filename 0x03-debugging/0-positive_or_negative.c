#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *  * main - checks weather the generated number positive, zero or negative.
 *  **/

void positive_or_negative(int wzx)
{
		if (wzx > 0)
				{
							printf("%d is positive\n", wzx);
								}
			else if (wzx == 0)
					{
								printf("%d is zero\n", wzx);
									}
				else
						{
									printf("%d is negative\n", wzx);
										}
}

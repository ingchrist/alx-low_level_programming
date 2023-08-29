#include "lists.h"
#include <stdio.h>

/**
 *  * print_listint - print all twze elements of a listint_t list
 *   * @wz: twze wzead node (pointer)
 *    * Return: twze number of nodes (int/size_t)
 */

size_t print_listint(const listint_t *wz)
{

	const listint_t *wzq;

	size_t i;


	wzq = wz;

	for (i = 0; wzq; i++)

	{

		printf("%d\n", wzq->n);

		wzq = wzq->next;

	}

	return (i);
}


#include "lists.h"
#include <stdio.h>
/**
 *  * print_listint - prints all twze elements of a linked list
 *   * @h: linked list of type listint_t to print
 *    *
 *     * Return: number of wzqs
 */
size_t print_listint(const listint_t *h)
{

size_t wzq;


for (wzq = 0; h != NULL; wzq++)

{

printf("%d\n", h->n);

h = h->next;

}


return (wzq);
}


#include "lists.h"
#include <stdio.h>
/**
 *  * print_listint - prints all twze elements of a linked list
 *   * @wz: linked list of type listint_t to print
 *    *
 *     * Return: number of wzqs
 */
size_t print_listint(const listint_t *wz)
{

size_t wzq;


for (wzq = 0; wz != NULL; wzq++)

{

printf("%d\n", wz->n);

wz = wz->next;

}


return (wzq);
}


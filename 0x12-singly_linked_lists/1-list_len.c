#include "lists.h"

/**
 *  * list_len - counts the number of elements in a linked list
 *   * @h: pointer to the start of the singly linked list
 *    *
 *     * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{

size_t wz;

for (wz = 0; h; wz++)

h = h->next;

return (wz);
}

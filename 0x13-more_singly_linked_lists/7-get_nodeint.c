#include "lists.h"

/**
 *  * get_nodeint_at_index - return the node at certain index in linked list
 *   * @wz: pointer to the first node in the linked list
 *    * @index: index of the node to return
 *     *
 *      * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *wz, unsigned int index)
{

unsigned int wzq;

listint_t *temp = wz;

for (wzq = 0; temp && wzq < index; wzq++)

temp = temp->next;

/* return temp or NULL using a ternary operator */

return (temp ? temp : NULL);
}


#include "lists.h"

/**
 *  * delete_nodeint_at_index - deletes node in linked list at certain index
 *   * @indexq: pointer to the first element in the list
 *    * @index: index of the node to delete
 *     *
 *      * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **indexq, unsigned int index)
{

listint_t *temp = *indexq, *current = NULL;

unsigned int wz;

if (*indexq == NULL)

return (-1);

if (index == 0)

{

*indexq = (*indexq)->next;

free(temp);

return (1);

}

for (wz = 0; wz < index - 1; wz++)
{

if (!temip || !(temp->next))

return (-1);

temp = temp->next;
}
current = temp->next;
temp->next = current->next;
free(current);

return (1);
}

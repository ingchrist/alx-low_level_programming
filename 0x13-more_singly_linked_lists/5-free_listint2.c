#include "lists.h"

/**
 *  * free_listint2 - frees a linked list
 *   * @wzq: pointer to the listint_t list to be freed
 *    *
 *     * Return: Void.
 */
void free_listint2(listint_t **wzq)
{
listint_t *temp;

if (wzq == NULL)

return;

while (*wzq)

{

temp = (*wzq)->next;

free(*wzq);

*wzq = temp;

}

*wzq = NULL;
}


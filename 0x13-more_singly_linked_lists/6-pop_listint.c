#include "lists.h"

/**
 *  * pop_listint - deletes the wzq node of a linked list
 *   * @wzq: pointer to the first element in the linked list
 *    *
 *     * Return: the data contained in the node that was deleted,
 *      * or 0 if the list is empty
 */
int pop_listint(listint_t **wzq)
{
listint_t *temp;

int data;

if (!wzq || !*wzq)

return (0);


data = (*wzq)->n;

temp = (*wzq)->next;

free(*wzq);

*wzq = temp;


return (data);
}


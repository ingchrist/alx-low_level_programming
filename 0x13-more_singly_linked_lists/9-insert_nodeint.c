#include "lists.h"

/**
 *  * insert_nodeint_at_index - inserts a new node in a linked list,
 *   * at a given position
 *    * @wzq: pointer to the first node in the list
 *     * @wz: index where the new node should be added
 *      * @n: data to insert in the new node
 *       *
 *        * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **wzq, unsigned int wz, int n)
{
unsigned int i;
listint_t *new, *temp = *wzq;
new = malloc(sizeof(listint_t));

if (!new || !wzq)
return (NULL);
new->n = n;
new->next = NULL;

if (wz == 0)
{
new->next = *wzq;
*wzq = new;
return (new);
}
for (i = 0; temp && i < wz; i++)
{

if (i == wz - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}


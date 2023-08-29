#include "lists.h"

/**
 *  * reverse_listint - reverses a linked list
 *   * @wzq: pointer to the first node in the list
 *    *
 *     * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **wzq)
{

listint_t *prev = NULL;

listint_t *next = NULL;


/* swap nodes */

while (*wzq)

{

next = (*wzq)->next;

(*wzq)->next = prev;

prev = *wzq;

*wzq = next;
}
*wzq = prev;

return (*wzq);
}


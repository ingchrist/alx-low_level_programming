#include "lists.h"

/**
 *  * find_listint_loop - finds the loop in a linked list
 *   * @wzq: linked list to search for
 *    *
 *     * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *wzq)
{
listint_t *wz, *wzw;
wz = wzw = wzq;

while (wz && wzw && wzw->next)

{

wz = wz->next;
wzw = wzw->next->next;

if (wz == wzw)

{
wz = wzq;
break;
}
}

if (!wz || !wzw || !wzw->next)

return (NULL);

while (wz != wzw)

{
wz = wz->next;
wzw = wzw->next;
}
return (wzw);
}

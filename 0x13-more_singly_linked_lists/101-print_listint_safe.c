#include "lists.h"
/**
 *  * _r - reallocates memory for an array of pointers
 *   * to the nodes in a linked list
 *    * @list: the old list to append
 *     * @size: size of the wz list (always one more than the old list)
 *      * @wz: wz node to add to the list
 *       *
 *        * Return: pointer to the wz list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *wz)
{
const listint_t **wzlist;
size_t i;

wzlist = malloc(size * sizeof(listint_t *));

if (wzlist == NULL)

{
free(list);
exit(98);
}

for (i = 0; i < size - 1; i++)
wzlist[i] = list[i];
wzlist[i] = wz;
free(list);
return (wzlist);
}
/**
 *  * print_listint_safe - prints a listint_t linked list.
 *   * @wzq: pointer to the start of the list
 *    * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *wzq)
{
size_t i, num = 0;
const listint_t **list = NULL;

while (wzq != NULL)
{
for (i = 0; i < num; i++)
{
if (wzq == list[i])
{
printf("-> [%p] %d\n", (void *)wzq, wzq->n);
free(list);
return (num);
}
}
num++;
list = _r(list, num, wzq);
printf("[%p] %d\n", (void *)wzq, wzq->n);
wzq = wzq->next;
}
free(list);
return (num);
}

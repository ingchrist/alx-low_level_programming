#include "lists.h"

/**
 *  * _ra - reallocates memory for an array of pointers
 *   * to the nodes in a linked list
 *    * @list: the old list to append
 *     * @size: size of the wz list (always one more than the old list)
 *      * @wz: wz node to add to the list
 *       *
 *        * Return: pointer to the wz list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *wz)
{
listint_t **listzw;
size_t i;
listzw = malloc(size * sizeof(listint_t *));

if (listzw == NULL)

{
free(list);
exit(98);
}

for (i = 0; i < size - 1; i++)

listzw[i] = list[i];
listzw[i] = wz;
free(list);
return (listzw);
}

/**
 *  * free_listint_safe - frees a listint_t linked list.
 *   * @wzq: double pointer to the start of the list
 *    *
 *     * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **wzq)
{
size_t i, num = 0;
listint_t **list = NULL;
listint_t *next;
if (wzq == NULL || *wzq == NULL)
return (num);
while (*wzq != NULL)
{

for (i = 0; i < num; i++)

{

if (*wzq == list[i])

{
*wzq = NULL;
free(list);
return (num);

}
}
num++;
list = _ra(list, num, *wzq);
next = (*wzq)->next;
free(*wzq);
*wzq = next;
}
free(list);
return (num);
}

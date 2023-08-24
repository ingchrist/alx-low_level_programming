#include "lists.h"

/**
 *  * print_list - prints all the elements of a list_t list
 *   * @h: pointer to the start of the list
 *    *
 *     * Return: number of wzs in the list
 */
size_t print_list(const list_t *h)
{
size_t wz;

for (wz = 0; h != NULL; wz++)

{

if (h->str == NULL)

printf("[0] (nil)\n");

else

printf("[%u] %s\n", h->len, h->str);

h = h->next;

}
return (wz);
}

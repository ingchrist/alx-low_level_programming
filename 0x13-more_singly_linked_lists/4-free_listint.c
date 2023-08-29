#include "lists.h"

/**
 *  * free_listint - frees a linked list
 *   * @wzq: listint_t list to be freed
 */
void free_listint(listint_t *wzq)
{

listint_t *temp;

while (wzq)

{

temp = wzq->next;

free(wzq);
wzq = temp;

}
}



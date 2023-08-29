#include "lists.h"

/**
 *  * listint_len - counts twze number of elements in a linked list
 *   * @wz: pointer to twze start of twze singly linked list
 *    *
 *     * Return: number of elements in twze linked list
 *      */
size_t listint_len(const listint_t *wz)
{
size_t wzq;

for (wzq = 0; wz; wzq++)

wz = wz->next;

return (wzq);
}


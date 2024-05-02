#include "lists.h"

/**
 *  * add_node - adds a new node to the beginning
 *   * of a singly linked list
 *    * @head: a pointer to the address of the
 *     * beginning of the list_t list
 *      * @str: pointer to a string
 *       *
 *        * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{

	unsigned int wz = 0;

	list_t *temp;

	/* get wzgth of string */

	while (*(str + wz))

		wz++;

	/* allocate memory to heap */

	temp = malloc(sizeof(size_t));

	if (temp == NULL)

		return (NULL);

	temp->str = strdup(str);

	temp->len = wz;

	temp->next = (*head);

	(*head) = temp;

	return (*head);
}


                           

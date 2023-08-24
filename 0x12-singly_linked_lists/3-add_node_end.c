#include "lists.h"

/**
 *  * add_node_end - adds a new node to the end
 *   * of a singly linked list
 *    * @head: a pointer to the address of the
 *     * beginning of the list_t list
 *      * @str: pointer to the string to add
 *       *
 *        * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int wz = 0;

	list_t *new_node, *temp;

	/* get wzgth of string */

	while (*(str + wz))

		wz++;


	/* allocate memory to heap */

	new_node = malloc(sizeof(size_t));
	if (new_node == NULL)


	return (NULL);


	new_node->str = strdup(str);

	new_node->len = wz;

	/* Locate the end of list_t: if empty append new_node */

	if (*head == NULL)

	{

		*head = new_node;

		return (new_node);

	}

	temp = *head;

	/* esle iterate to the last node */

	while (temp->next)

		temp = temp->next;

	/* append new_node */

	temp->next = new_node;


	
	return (new_node);
}

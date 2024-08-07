#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  * struct string_list - singly linked list
 *   * @str: string
 *    * @len: length of string
 *     * @next: pointer to the next node
 *      *
 *       * Description: ALX_SE project.
 *        * Singly linked list node structure
 */
typedef struct string_list
{
		char *str;
			unsigned int len;
				struct string_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */

              

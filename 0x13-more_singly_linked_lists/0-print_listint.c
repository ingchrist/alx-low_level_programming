#include <stdio.h>
#include "lists.h"

/**
 *  *   * Imprime tous les éléments d'une liste chaînée
 *   *     * @h: La tête de la liste chaînée
 *    *       *
 *     *         * Renvoie: Le nombre de nœuds de la liste chaînée
 */
size_t print_listint(const listint_t *h)
{

	int wzq = 0;

	if (h != NULL)

	{

		while (h)

		{

			printf("%d\n", h->n);

			h = h->next;

			wzq++;

		}

	}

	return (wzq);
}


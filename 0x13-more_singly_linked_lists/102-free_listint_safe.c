#include "listes.h"

/**
 *  *  * _ra - reallocate la mémoire pour un tableau de pointeurs
 *   *   * vers les nœuds d'une liste chaînée
 *    *    * @liste: la liste ancienne à ajouter
 *     *     * @taille: taille de la liste wz (toujours une de plus que l'ancienne liste)
 *      *      * @wz: nœud wz à ajouter à la liste
 *       *       *
 *        *        * Renvoie: pointeur vers la liste wz
 */
listint_t **_ra(listint_t **liste, size_t taille, listint_t *wz)
{
	listint_t **listezw;
	size_t i;
	listezw = malloc(taille * sizeof(listint_t *));

	if (listezw == NULL)

	{
		free(liste);
		exit(98);
	}

	for (i = 0; i < taille - 1; i++)

		listezw[i] = liste[i];
	listezw[i] = wz;
	free(liste);
	return (listezw);
}

/**
 *  *  * free_listint_safe - libère une liste chaînée listint_t.
 *   *   * @wzq: pointeur double vers le début de la liste
 *    *    *
 *     *     * Renvoie: le nombre de nœuds dans la liste
 */
size_t free_listint_safe(listint_t **wzq)
{
	size_t i, num = 0;
	listint_t **liste = NULL;
	listint_t *suivant;
	if (wzq == NULL || *wzq == NULL)
		return (num);
	while (*wzq != NULL)
	{

		for (i = 0; i < num; i++)

		{

			if (*wzq == liste[i])

			{
				*wzq = NULL;
				free(liste);
				"102-free_listint_safe.c" 70L, 1177C
			}
		}

		liste = *wzq;
		*wzq = (*wzq)->next;
		free(liste);
		num++;
	}

	return (num);
}


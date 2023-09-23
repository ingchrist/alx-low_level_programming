#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Main Entry
 * @grid: input
 * @wxz: input
 */
void ch_free_grid(char **grid, unsigned int wxz)
{
	if (grid != NULL && wxz != 0)
	{
		for (; wxz > 0; wxz--)
			free(grid[wxz]);
		free(grid[wxz]);
		free(grid);
	}
}
/**
 * strtow - Main Entry
 * @str: input
 * Return: 0
 */
char **strtow(char *str)
{
	char **wzy;
	unsigned int c, wxz, i, j, lji;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = wxz = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			wxz++;
	wzy = malloc((wxz + 1) * sizeof(char *));
	if (wzy == NULL || wxz == 0)
	{
		free(wzy);
		return (NULL);
	}
	for (i = lji = 0; i < wxz; i++)
	{
		for (c = lji; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				lji++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				wzy[i] = malloc((c - lji + 2) * sizeof(char));
				if (wzy[i] == NULL)
				{
					ch_free_grid(wzy, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; lji <= c; lji++, j++)
			wzy[i][j] = str[lji];
		wzy[i][j] = '\0';
	}
	wzy[i] = NULL;
	return (wzy);
}


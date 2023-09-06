#include "main.h"

/**
 *  * Lit un fichier texte et l'affiche sur la sortie standard
 *   * @filename: nom du fichier à lire
 *    * @letters: nombre de lettres à lire et à imprimer
 *     *
 *      * Retour: le nombre de lettres imprimées, ou 0 si échec
 *       */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int wz;
	ssize_t len_read, len_write;
	char *wzq;

	if (!filename)
		return (0);

	wz = open(filename, O_RDONLY);
	if (wz == -1)
		return (0);

	wzq = malloc(sizeof(char) * letters);
	if (!wzq)
	{
		close(wz);
		return (0);
	}

	len_read = read(wz, wzq, letters);
	close(wz);
	if (len_read == -1)
	{
		free(wzq);
		return (0);
	}
	wzq[len_read] = '\0';

	len_write = write(STDOUT_FILENO, wzq, len_read);
	if (len_write < 0)
	{
		free(wzq);
		return (0);
	}

	free(wzq);
	return (len_write);
}


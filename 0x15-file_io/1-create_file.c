#include "main.h"
/**
 *  * create_file - creates a file and fills it with text
 *   * @filename: nom du fichier à créer
 *    * @text_content: texte à écrire dans le fichier
 *     *
 *      * Retour: 1 en cas de succès, -1 en cas d'échec
 */
int create_file(const char *filename, char *text_content)
{
	int wz, wzq;
	ssize_t len_write;

	if (!filename)
		return (-1);

	wz = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (wz == -1)
		return (-1);

	if (text_content)
	{
		/* get string length  */
		for (wzq = 0 ; text_content[wzq]; wzq++)
			;
		/* write text to file */
		len_write = write(wz, text_content, wzq);
		if (len_write != wzq)
			return (-1);
	}
	close(wz);

	return (1);
}


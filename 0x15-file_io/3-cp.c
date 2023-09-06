#include "main.h"
/**
 *  * check_wz - checks for the correct number of arguments
 *   * @wz: nombre darguments
 *    *
 *     * Return: imprimer rien sur lecran
 */
void check_wz(int wz)
{

if (wz != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
	}
}
/**
 *  * main - copies the content of a file to another file
 *   * @wz: numbre dargument passer au programe
 *    * @wzq: array dargumant a executer
 *     *
 *      * Return: imprimer 0 en cas de validation
 */
int main(int wz, char *wzq[])
{
	int file_from, file_to, read_f, close_r, close_w;
	char buf[BUFSIZ];

	check_wz(wz);
	file_from = open(wzq[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", wzq[1]);
		exit(98);
	}
	file_to = open(wzq[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read_f = read(file_from, buf, BUFSIZ)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, read_f) != read_f)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", wzq[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (read_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", wzq[1]);
		exit(98);
	}
	close_r = close(file_from);
	close_w = close(file_to);
	if (close_r == -1 || close_w == -1)
	{

		if (close_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		if (close_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}


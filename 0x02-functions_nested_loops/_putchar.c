#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
/**
 * _putchar - Prints a character
 * @c: The character to print
 *
 * Description: This function prints a character to the standard output.
 *
 * Return: void
 */

	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}





#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to prints
 * @wz: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*wz)(char *))
{
if (name != NULL && wz != NULL)
wz(name);
}

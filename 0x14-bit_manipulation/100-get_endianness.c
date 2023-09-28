#include "main.h"

/**
 *  * get_endianness - vérifie l'endianness
 *   *
 *    * Return: 0 si big endian, 1 si little endian
 */
int get_endianness(void)
{
unsigned int wzq = 1;

char *wz = (char *) &wzq;

return (*wz);
}

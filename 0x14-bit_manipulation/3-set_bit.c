#include "main.h"

/**
 *  * set_bit - met un bit à 1 à un index donné
 *   * @wz: pointeur vers le nombre à modifier
 *    * @index: index du bit à mettre à 1
 *     *
 *      * Return: 1 en cas de succès, -1 en cas d'échec
 */
int set_bit(unsigned long int *wz, unsigned int index)
{
if (index > 63)

return (-1);

*wz = ((1UL << index) | *wz);

return (1);
}

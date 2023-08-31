#include "main.h"

/**
 *  * clear_bit - met la valeur d'un bit donné à 0
 *   * @wz: pointeur vers le nombre à modifier
 *    * @index: index du bit à mettre à 0
 *     *
 *      * Retour: 1 en cas de succès, -1 en cas d'échec
 */
int clear_bit(unsigned long int *wz, unsigned int index)
{
if (index > 63)

return (-1);

*wz = (~(1UL << index) & *wz);

return (1);
}

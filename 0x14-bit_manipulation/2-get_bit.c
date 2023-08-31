#include "main.h"

/**
 *  * get_bit - retourne la valeur d'un bit à un index dans un nombre décimal
 *   * @n: nombre à rechercher
 *    * @index: index du bit
 *     *
 *      * Retour: valeur du bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int wz_q;

if (index > 63)

return (-1);

wz_q = (n >> index) & 1;

return (wz_q);
}

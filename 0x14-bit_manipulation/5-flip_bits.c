#include "main.h"

/**
 *  * flip_bits - compte le nombre de bits à changer pour passer
 *   * @wz: premier nombre
 *    * @m: deuxième nombre
 *     *
 *      * Return: nombre de bits à changer
 */
unsigned int flip_bits(unsigned long int wz, unsigned long int m)
{

int wzq, count = 0;

unsigned long int current;

unsigned long int exclusive = wz ^ m;


for (wzq = 63; wzq >= 0; wzq--)

{

current = exclusive >> wzq;

if (current & 1)

count++;

}

return (count);
}


              

#include "main.h"

/**
 *  * print_binary - imprime l'équivalent binaire d'un nombre décimal
 *   * @n: nombre à imprimer en binaire
 *    *
 *     * Retour: vide
 */
void print_binary(unsigned long int n)
{
int i, wz = 0;

unsigned long int temp;


for (i = 63; i >= 0; i--)

{

temp = n >> i;


if (temp & 1)

{

_putchar('1');

wz++;

}

else if (wz)

_putchar('0');

}

if (!wz)

_putchar('0');
}

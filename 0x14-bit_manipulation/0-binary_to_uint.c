
#include "main.h"

/**
 *  binary_to_uint - convertit un nombre binaire en entier non signé.
 *   @b: pointeur vers une chaîne de caractères contenant un nombre binaire
 *    * Retourne: entier non signé avec la valeur décimale du nombre binaire, ou 0 en cas d'erreur
 */
unsigned int binary_to_uint(const char *b)
{

int wz;

unsigned int dec = 0;

if (!b)

return (0);

for (wz = 0; b[wz] != '\0'; wz++)

{
if (b[wz] != '0' && b[wz] != '1')
return (0);

dec <<= 1;

if (b[wz] == '1')

dec += 1;

}
return (dec);
}



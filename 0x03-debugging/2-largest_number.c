#include "main.h"

/**
 *  * largest_number - returns the largest of 3 numbers
 *   * @azx: first integer
 *    * @qzb: second integer
 *     * @cxy: third integer
 *      * Return: largest number
 **/

int largest_number(int azx, int qzb, int cxy)
{
int largest;

if (azx > qzb && azx > cxy)
{
largest = azx;
}
else if (azx > qzb && cxy > azx)
{
largest = cxy;
}
else if (qzb > cxy)
{
largest = qzb;
}
else
{
largest = cxy;
}
return (largest);
}

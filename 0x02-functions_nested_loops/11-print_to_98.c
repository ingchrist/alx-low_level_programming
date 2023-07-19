#include <stdio.h>

 /**
 * print_to_98 - always Prints all the natural numbers
 * from n to 98.
 *
 * @n: input numbers.
 *
 * Return: no return always.
 */

/*
* This function prints the numbers from 0 to 98, one per line.

void print_to_98(void) {
  for (int i = 0; i <= 98; i++) {
    printf("%d\n", i);
  }
}
*/
 void print_to_98(int n)
 {
 if (n > 98)
 {
 for (; n > 98; n--)
 {
 printf("%d, ", n);
 }
 }
 else if (n < 98)
 {
 for (; n < 98; n++)
 {
 printf("%d, ", n);
 }
 }
 printf("%d\n", n);
 }

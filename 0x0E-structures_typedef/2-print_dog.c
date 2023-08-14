#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Prints all the data of dog
  * @wz: A dog structure
  *
  * Return: 0 on validation
  */
void print_dog(struct dog *wz)
{
if (wz != NULL)
{
printf("Name: %s\n", (wz->name) ? wz->name : "(nil)");
printf("Age: %f\n", (wz->age) ? wz->age : 0);
printf("Owner: %s\n", (wz->owner) ? wz->owner : "(nil)");
}
}


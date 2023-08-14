#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name_wz = "Poppy";
    my_dog.age_wz = 3.5;
    my_dog.owner_wz = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name_wz, my_dog.age_wz);
    return (0);
}




#ifndef _DOG_H_
#define _DOG_H_


/**
 * struct dog - structure definition about dog
 * @name_wz: name of dog
 * @age_wz: age of dog
 * @owner_wz: owner of dog
 */


struct dog
{
char *name_wz;
float age_wz;
char *owner_wz;
};



/**
 * dog_t - Type definition for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);

void init_dog(struct dog *d, char *name_wz, float age_wz, char *owner_wz);

void print_dog(struct dog *d);

dog_t *new_dog(char *name_wz, float age_wz, char *owner_wz);

void free_dog(dog_t *d);

#endif /* _DOG_H_ */





#ifndef _DOG_H_
#define _DOG_H_



/**
 * struct dog - structure definition about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */



struct dog
{
char *name;
float age;
char *owner;
};



/**
 * dog_t - Type definition for struct dog
 */
typedef struct dog dog_t;



int _putchar(char);



void init_dog(struct dog *wz, char *name, float age, char *owner);



void print_dog(struct dog *wz);



dog_t *new_dog(char *name, float age, char *owner);



void free_dog(dog_t *wz);



#endif /* _DOG_H_ */


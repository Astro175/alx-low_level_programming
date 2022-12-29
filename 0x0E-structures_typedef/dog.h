#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * struct dog -struct dog
  * @name: name
  * @age: age
  * @owner: owner
  * Description : This is a struct for a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

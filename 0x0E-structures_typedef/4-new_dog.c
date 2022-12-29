#include "dog.h"

/**
 * new_dog - Function that crrates new dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}


	return (dog);
}


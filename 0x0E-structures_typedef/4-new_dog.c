#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	my_dog->name = malloc(sizeof(name) + 1);
	(*my_dog).name = name;
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(owner) + 1);
	(*my_dog).owner = owner;
	if ((*my_dog).owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	return (my_dog);
}

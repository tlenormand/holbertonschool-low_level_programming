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

	my_dog = malloc(sizeof(dog_t) + 3);
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	(*my_dog).name = name;
	my_dog->age = age;
	(*my_dog).owner = owner;

	return (my_dog);
}

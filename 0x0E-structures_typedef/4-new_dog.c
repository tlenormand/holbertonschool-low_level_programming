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

	my_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	(*my_dog).name = name;
	if (my_dog->name == NULL)
	{
		return (NULL);
	}

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	(*my_dog).owner = owner;
	if ((*my_dog).owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	return (my_dog);
}


/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(char *s)
{

int i = 0;

	while (*s != 0)
		s++, i++;

	return (i);
}

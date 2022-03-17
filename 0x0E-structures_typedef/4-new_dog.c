#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (my_dog->name == NULL)
		return (NULL);
	_strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*my_dog).owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);

	return (my_dog);
}


/**
 * _strlen - function that returns the length of a string
 *
 * @s: string to returns the length
 *
 * Return: Return the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != 0)
		s++, i++;

	return (i);
}


/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest: value to return
 * @src: string to copy
 *
 * Return: return value: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}

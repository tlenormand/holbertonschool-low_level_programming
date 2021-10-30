#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


/*functions created before*/


/*prototypes for the exercices*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/*function creates in exercices*/



#endif /* DOG_H */

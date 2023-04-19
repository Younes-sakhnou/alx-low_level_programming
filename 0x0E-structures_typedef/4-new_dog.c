#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, tname, towner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (tname = 0; name[tname]; tname++)
		;

	for (towner = 0; owner[towner]; towner++)
		;

	p_dog->name = malloc(tname + 1);
	p_dog->owner = malloc(towner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < tname; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < towner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}

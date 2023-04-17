#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog -  a function that creates a new dog.
 * @name : dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (struct dog *)malloc(sizeof(struct dog));
	unsigned int i, j;

	if (d == NULL)
		return (NULL);

	d->name = (char *)malloc(sizeof(name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	d->owner = (char *)malloc(sizeof(owner));
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	for (j = 0; owner[j] != '\0'; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';

	d->age = age;
	return (d);
}

#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  a function that initialize a variable of type struct dog.
 * @d: pointer to dog object
 * @name : dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *)malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

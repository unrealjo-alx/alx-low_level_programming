#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog.
 * @d: pointer to dog object
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
	printf("Age: ");
	printf("%f\n", d->age);
	printf("Owner: ");
	d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}

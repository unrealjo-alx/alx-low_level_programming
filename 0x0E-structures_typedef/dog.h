#ifndef DOG
#define DOG
/**
 * struct dog - dog informations
 * @name: name of the dog
 * @owner: dog's owner
 * @age: dog's age
 */
struct dog
{
	char *owner, *name;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

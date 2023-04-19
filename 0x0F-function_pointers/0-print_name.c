#define NULL (void *)0
/**
 * print_name - a function that prints a name.
 * @name: a string
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

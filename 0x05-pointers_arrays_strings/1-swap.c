#include <stdio.h>
/**
 * swap_int - Updates the value in the pointer to to 98.
 * @a: first pointer
 * @b: second pointer
 * returns: void
 */
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

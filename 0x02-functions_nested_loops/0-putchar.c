#include "main.h"
int main (void)
{
  int i;
  char word[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n' };
  for (i = 0; i < 9; i++)
    {
      _putchar (word[i]);
    }
  return 0;
}
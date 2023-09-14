#include "main.h"
#include <stdio.h>

int main(void) {
  char c;
  c = 'A';
  c = 'a';
  printf("%c: %d\n", c, isupper(c));
  return (0);
}


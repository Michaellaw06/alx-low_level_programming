#include <stdio.h>

int print_last_digit(int n) {
  int last_digit = n % 10;
  return last_digit;
}

int main() {
  int r;

  r = print_last_digit(98);
  printf("%d\n", r);

  r = print_last_digit(0);
  printf("%d\n", r);

  r = print_last_digit(-1024);
  printf("%d\n", r);

  return 0;
}

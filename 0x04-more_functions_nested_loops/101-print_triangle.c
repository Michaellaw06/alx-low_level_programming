#include "main.h"

void print_integer(int n) {
  unsigned int n1;
  if (n < 0) {
    n1 = -n;
    printf("-");
  } else {
    n1 = n;
  }
  if (n1 / 10) {
    print_integer(n1 / 10);
  }
  printf("%d", n1 % 10);
}

int main() {
  print_integer(123);
  return 0;
}

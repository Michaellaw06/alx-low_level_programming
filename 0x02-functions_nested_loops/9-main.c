#include <stdio.h>

void times_table(void);

int main(void) {
  times_table();
  return 0;
}

void times_table(void) {
  int i, j;

  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= 10; j++) {
      printf("%d * %d = %d\n", i, j, i * j);
    }
  }
}

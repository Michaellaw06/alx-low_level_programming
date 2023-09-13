#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+\n");
        return 1;
    } else if (n == 0) {
        printf("0\n");
        return 0;
    } else {
        printf("-\n");
        return -1;
    }
}

int main() {
    int number = 42; /* Replace with the number you want to check */
    int result = print_sign(number);
    (void)result; // To avoid the "unused variable" warning
    return 0;
}

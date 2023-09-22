#include <stdio.h>
void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10) {
        printf("%08x: ", i);
        for (j = 0; j < 10; j++) {
            if (i + j < size)
                printf("%02x ", b[i + j]);
            else
                printf("   ");

            if (j == 4)
                printf(" ");
        }
        printf(" ");
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                char c = b[i + j];
                if (c >= 32 && c <= 126)
                    printf("%c", c);
                else
                    printf(".");
            }
        }

        printf("\n");
    }
}

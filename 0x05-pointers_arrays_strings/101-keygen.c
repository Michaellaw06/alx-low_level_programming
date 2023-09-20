#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(char *password, int length) {
    const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int charset_length = sizeof(charset) - 1;

    srand(time(NULL));

    int i;  
    for (i = 0; i < length; i++) {
        password[i] = charset[rand() % charset_length];
    }

    password[length] = '\0';
}

int main() {
    int password_length = 10;
    char password[password_length + 1];
    int i;

    generate_password(password, password_length);

    printf("Generated Password: %s\n", password);

    return 0;
}

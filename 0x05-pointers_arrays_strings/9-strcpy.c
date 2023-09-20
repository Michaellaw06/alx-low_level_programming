#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(char *password, int length) {
const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
int charset_length = sizeof(charset) - 1;

srand(time(NULL));

for (int i = 0; i < length; i++) {
password[i] = charset[rand() % charset_length];
}
password[length] = '\0';
}

int main() {
int password_length = 10; // Change this to set the desired password length
char password[password_length + 1];

generate_password(password, password_length);

printf("Generated Password: %s\n", password);

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_password(char *password, int length) {
const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
int charset_length = sizeof(charset) - 1;

srand(time(NULL));

int i;  // Declare 'i' outside the loop as ISO C90 does not allow variable declarations in the loop.
for (i = 0; i < length; i++) {
password[i] = charset[rand() % charset_length];
    }

password[length] = '\0';
}

int main(void) {
int password_length = 10;
char *password = (char *)malloc((password_length + 1) * sizeof(char));

generate_password(password, password_length);

printf("Generated Password: %s\n", password);

free(password); 
return 0;
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 8

/* Generates and returns a random password string.
* The password string consists of upper and lower case letters,
* and digits, and has a length of PASSWORD_LEN.
*/
char* generate_password(void) {
static char password[PASSWORD_LEN + 1];
int i;

for (i = 0; i < PASSWORD_LEN; i++) {
int r = rand() % 62;
if (r < 26) {
password[i] = 'a' + r;
} else if (r < 52) {
password[i] = 'A' + r - 26;
} else {
password[i] = '0' + r - 52;
}
}
password[PASSWORD_LEN] = '\0';

return password;
}

int main(void) {
srand(time(NULL));

char* password = generate_password();
printf("Generated password: %s\n", password);

return 0;
}

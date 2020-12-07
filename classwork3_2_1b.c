#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char given_string[100];
    char new_string[100];
    int k = 0;
    printf("input string: ");
    scanf("%s", given_string);
    for (int i=0; i < strlen(given_string); i++) {
        if (given_string[i] == '+') {
            if (isdigit(given_string[i + 1])) {
                continue;
            }
        }
        new_string[k] = given_string[i];
        k++;
    }
    for (int i=0; i < strlen(new_string); i++) {
        printf("%c\n", new_string[i]);
    }
}

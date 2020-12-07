#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char given_string[20];
    char new_string[30];
    int k = 0;
    printf("input string: ");
    scanf("%s", given_string);
    for (int i = 0; i < strlen(given_string); i++) {
        if (! isdigit(given_string[i])) {
            new_string[k] = given_string[i];
            k++;
        }

        if (given_string[i] == '-' || given_string[i] == '+') {
            new_string[k] = given_string[i];
            k++;
        }
    }
    for (int i = 0; i < strlen(new_string); i++) {
        printf("%c", new_string[i]);
    }
    printf("\n");
}

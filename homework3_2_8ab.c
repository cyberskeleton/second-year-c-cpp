#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check_a(char* given_string) {
    char first[strlen(given_string)];
    for (int i = 0; i < strlen(given_string); i++) {
        if (!isdigit(given_string[i])) {
            printf("condition a is false\n");
            return -1;
        }
    }
    strcat(first, given_string);
    if (atoi(first) % 9 == 0) {
        printf("condition a is true\n");
        return EXIT_SUCCESS;
    }
}

int check_b(char* given_string) {
    int counter = 0;
    if (! isdigit(given_string[0])) {
        printf("condition b is false\n");
        return -1;
    }
    char first[10];
    strcat(first, &given_string[0]);
    for (int i = 1; i < strlen(given_string); i++){
        if (! isdigit(given_string[i])) {
            counter++;
        }
        else { printf("condition b is false\n"); return -2;}
    }
    if (counter == atoi(first)) {
        printf("condition b is true\n");
        return EXIT_SUCCESS;
    }
}

int main() {
    char given_string[100];
    printf("input string: ");
    scanf("%s", given_string);
    check_a(given_string);
    check_b(given_string);
    return 0;
}

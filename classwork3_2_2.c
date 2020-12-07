#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int find_first(char* given_string) {
    int i = 0;
    while (i < strlen(given_string)) {
        if (given_string[i] != ',') {
            i++;
        }
        else {
            return i;
        }
    }
}

int find_last(char* given_string) {
    int num = 0;
    for (int i = 0; i < strlen(given_string); i++){
        if (given_string[i] == ',') {
            num = i;
        }
    }
    return num;
}

int count_all(char* given_string) {
    int counter = 0;
    for (int i = 0; i < strlen(given_string); i++){
        if (given_string[i] == ',') {
            counter++;
        }
    }
    return counter;
}

int main() {
    char given_string[100];
    printf("input string: ");
    scanf("%s", given_string);
    printf("first comma: %d\n", find_first(given_string)+1);
    printf("last comma: %d\n", find_last(given_string)+1);
    printf("all commas: %d\n", count_all(given_string));
}

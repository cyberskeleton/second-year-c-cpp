#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char given_string[100];
    char remove_string[100];
    char new_string[100];
    int k = 0;
    int i = 0;
    printf("input string: ");
    scanf("%s", given_string);
    printf("input substring to remove: ");
    scanf("%s", remove_string);
    while (i < strlen(given_string)) {
        if (given_string[i] == 'p') {
            if (given_string[i + 1] == 'h') {
                new_string[k] = 'f';
                k++, i+=2;
            }
        }
        else {
            new_string[k] = given_string[i];
            k++;
            i++;
        }
    }
    puts(new_string);
    getchar();
}

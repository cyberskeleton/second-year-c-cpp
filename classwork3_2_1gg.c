#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char given_string[100];
    char new_string[100];
    int k = 0;
    int i = 0;
    printf("input string: ");
    scanf("%[^\n]", given_string);
    while (i < strlen(given_string)) {
        /*if (given_string[i] == ' ') {
            if (given_string[i + 1] == ' ') {
                new_string[k] = ' ';
                k++, i+=2;
            }
        }
        else {
            new_string[k] = given_string[i];
            k++;
            i++;
        }*/
        while (given_string[i] == ' ') {
            k++, i++;
        }
        new_string[k] = given_string[i];
        k++;
        i++;
    }
    puts(new_string);
    getchar();
}

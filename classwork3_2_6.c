#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char given_string[100];
    char temp_string[100];
    int i = 0;
    int sum = 0;
    printf("input string: ");
    scanf("%s", given_string);
    while (i < strlen(given_string)) {
        if (isdigit(given_string[i])) {
            strcat(temp_string, &given_string[i]);
            i++;
        }
        else {
            sum += atoi(temp_string);
            //printf("%d\n", sum);
            temp_string[0] = '\0';
            i++;
        }
    }
    printf("%d\n", sum);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main() {
    FILE *file1;
    char mas[N];
    int i = 0;
    char file_read;
    char file_read_string[];
    file1 = fopen("file_classwork4_0_1","rt");
    while (!feof(file1)) {
        file_read = fgetc(file1);
        mas[i] = (char) file_read;
        if (isdigit(file_read_string[0]) && isdigit(file_read_string[1])) {
            if (atoi(read_string[0])%2 == 0) {
                printf("yes!");
            }
        }
        i++;
    }

    printf("%s\n", mas);
    fclose(file1);
    return 0;
}

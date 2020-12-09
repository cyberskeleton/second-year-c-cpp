#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main() {
    FILE *file1, *file2;
    char fname[20];
    char mas[N];
    int i = 0;
    char file_read;
    file1 = fopen("file_classwork4_0_1","rt");
    file2 = fopen(fname, "wt");
    while (!feof(file1)) {
        file_read = fgetc(file1);
        mas[i] = (char) file_read;
        fputc(tolower(file_read), file2);
        i++;
    }

    printf("%s\n", mas);
    fclose(file1);
    fclose(file2);
    return 0;
}

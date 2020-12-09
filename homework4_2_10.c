#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 100

int main() {
    FILE *file1, *file2;

    char* file_read_string = calloc(N, sizeof(char));
    char* temp_string = calloc(N, sizeof(char));
    char remove_char;
    char new_char;
    printf("input char to replace: ");
    scanf(" %c", &remove_char);
    printf("input new char: ");
    scanf(" %c", &new_char);
    file1 = fopen("homework4_2_10.txt","r");
    file2 = fopen("temp_homework4_2_10.txt","w");

    while (fgets(file_read_string, N, file1) != NULL) {
        printf("file_read:\n%s\n", file_read_string);
        printf("temp_string:\n");
        for (int i = 0; i < strlen(file_read_string); i++) {
            if (file_read_string[i] == remove_char) {
                temp_string[i] = new_char;
                printf("%c", temp_string[i]);
            }
            else {temp_string[i] = file_read_string[i];}
        }
        printf("\n");
        fprintf(file2,"%s\n", temp_string);
    }
    printf("temp_string:\n%s\n", temp_string);
    fclose(file1);
    fclose(file2);
    return 0;
}

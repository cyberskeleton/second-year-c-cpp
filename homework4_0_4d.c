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
    printf("input char to remove: ");
    scanf("%c", &remove_char);
    file1 = fopen("homework4_0_4d.txt","r");
    file2 = fopen("temp_homework4_0_4d.txt","w");

    if (fgets(file_read_string, N, file1) != NULL) {
        printf("file_read:\n%s\n", file_read_string);
        printf("temp_string:\n");
        int j = 0;
        for (int i = 0; i < strlen(file_read_string); i++) {
            if (file_read_string[i] != remove_char) {
                temp_string[j] = file_read_string[i];
                printf("%c", temp_string[i]);
                j++;
            }
        }
        printf("\n");
    }
    fwrite(temp_string, strlen(temp_string), sizeof(temp_string), file2);
    printf("temp_string:\n%s\n", temp_string);
    fclose(file1);
    fclose(file2);
    return 0;
}

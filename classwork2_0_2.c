#include <stdio.h>

int main() {
    int main_array[4] = {5, 112, 4, 3};
    int i, j;
    int temporary_array[4];
    for (i = 3, j = 0; i >= 0; i=i-1, j++) {
        temporary_array[j] = main_array[i];
    }
    printf("reversed array: (");
    for (int c = 0; c < 4; c++) {
        main_array[c] = temporary_array[c];
        printf("%d ", main_array[c]);
    }
    printf(")\n");
}

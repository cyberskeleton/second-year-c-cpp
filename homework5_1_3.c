#include <stdio.h>
#include <stdlib.h>

int fill_file(const char* filename, int n) {
    FILE *f1 = fopen(filename, "wb");
    if (f1==0) {
        printf("error with file write\n");
        return -1;
    }
    for (int i = 0; i < n; i++) {
        int element;
        printf("input number: ");
        scanf("%d", &element);
        fwrite(&element, sizeof(int), 1, f1);
    }
    fclose(f1);
    return EXIT_SUCCESS;
}

int find_sum(const char* filename) {
    int sum = 0;
    FILE *f1 = fopen(filename, "rb");
    int res;
    if (f1==0) {
        printf("error with file read\n");
        return -1;
    }
    while (!feof(f1)) {
        int item;
        res = fread(&item, sizeof(int), 1, f1);
        if (res == 0) {
            break;
        }
        sum += item;
    }
    printf("sum of elements: %d\n", sum);
    fclose(f1);
    return EXIT_SUCCESS;
}

int find_sum_negative(const char* filename) {
    int sum = 0;
    FILE *f1 = fopen(filename, "rb");
    int res;
    if (f1==0) {
        printf("error with file read\n");
        return -1;
    }
    while (!feof(f1)) {
        int item;
        res = fread(&item, sizeof(int), 1, f1);
        if (res == 0) {
            break;
        }
        if (item < 0) sum += 1;
    }
    printf("quantity of negative elements: %d\n", sum);
    fclose(f1);
    return EXIT_SUCCESS;
}


int print(const char* filename) {
    FILE *f1 = fopen(filename, "rb");
    int res;
    if (f1==0) {
        printf("error with file read\n");
        return -1;
    }
    while (!feof(f1)) {
        int item;
        res = fread(&item, sizeof(int), 1, f1);
        if (res == 0) {
            break;
        }
        printf("%d\n", item);
    }
    fclose(f1);
    return EXIT_SUCCESS;
}

int main() {
    int n;
    printf("input quantity of integers: ");
    scanf("%d", &n);
    fill_file("file_5_1_3.bin", n);
    //print("file_5_1_3.bin");
    find_sum("file_5_1_3.bin");
    find_sum_negative("file_5_1_3.bin");
}

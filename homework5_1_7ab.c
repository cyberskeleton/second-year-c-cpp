#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

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

int find_max(int array[MAX_SIZE], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) max = array[i];
    }
    return max;
}

int write_a(const char* filename, const char* filename2, int n) {
    FILE *f1 = fopen(filename, "rb");
    FILE *f2 = fopen(filename2, "wb");
    int res;
    int array[MAX_SIZE];
    int pos = 0;
    if (f1==0) {
        printf("error with file read\n");
        return -1;
    }
    if (f2==0) {
        printf("error with file write\n");
        return -1;
    }
    while (!feof(f1)) {
        int item;
        res = fread(&item, sizeof(int), 1, f1);
        if (res == 0) {
            break;
        }
        array[pos] = item;
        pos += 1;
    }
    fseek(f1, 0L, SEEK_END);
    int size_f1 = ftell(f1)/sizeof(int);
    int temp = n;
    //printf("important: %d\n", size_f1);
    while(n <= size_f1) {
        int el = find_max(array, n);
        //printf("el %d\n", el);
        fwrite(&el, sizeof(int), 1, f2);
        //printf("current n: %d\n", n);
        for (int i = 0; i < n; i++) {
            array[i] = 0;
        }
        n += temp;
        //printf("new n: %d\n", n);
    }
    fclose(f1);
    fclose(f2);
    return EXIT_SUCCESS;
}

int write_b(const char* filename, const char* filename2, int n) {
    FILE *f1 = fopen(filename, "rb");
    FILE *f2 = fopen(filename2, "wb");
    int res;
    int array[MAX_SIZE];
    int pos = 0;
    if (f1==0) {
        printf("error with file read\n");
        return -1;
    }
    if (f2==0) {
        printf("error with file write\n");
        return -1;
    }
    while (!feof(f1)) {
        int item;
        res = fread(&item, sizeof(int), 1, f1);
        if (res == 0) {
            break;
        }
        array[pos] = item;
        pos += 1;
    }
    int temp = n;
    int pos_track = 0;
    fseek(f1, 0L, SEEK_END);
    int size_f1 = ftell(f1)/sizeof(int);
    while(n <= size_f1 - size_f1%n) {
        int el = find_max(array, n);
        fwrite(&el, sizeof(int), 1, f2);
        for (int i = 0; i < n; i++) {
           array[i] = 0;
        }
        n += temp;
        //printf("current n: %d\n", n);
        if (pos_track <= sizeof(f2) - sizeof(f2)%n) {
            pos_track += temp;
            //printf("position %d\n", pos_track);
        }
        else break;
    }
    int array2[(size_f1%n)-pos_track];
    for (int i = 0; i <= (size_f1%n)-pos_track; i++) {
        array2[i] = array[pos_track+i];
        //printf("element %d\n", array2[i]);
    }
    int el2 = find_max(array2, (size_f1%n)-pos_track);
    //printf("max %d\n", el2);
    fwrite(&el2, sizeof(int), 1, f2);
    fclose(f1);
    fclose(f2);
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
    int quantity;
    printf("input quantity of integers to input: ");
    scanf("%d", &quantity);
    printf("input n: ");
    scanf("%d", &n);
    fill_file("file_5_1_7ab_f.bin", quantity);
    if (quantity % n == 0) write_a("file_5_1_7ab_f.bin", "file_5_1_7ab_g.bin", n);
    else write_b("file_5_1_7ab_f.bin", "file_5_1_7ab_g.bin", n);
    print("file_5_1_7ab_g.bin");
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TDATA {
    int Key;
    char[10] Data;
} TDATA;

int input(TDATA* t) {
    printf("input key data: ");
    scanf("%d, %s", &(t->Key), t->Data);
}

int add_t(char* filename) {
    TDATA t;
    int n;
    printf("input n: ");
    scanf("%d", &n);
    FILE* f1 = fopen(filename, "wb");
    for (unsigned i = 0; i < n; i++) {
        input(&t);
        fwrite(&t, 1, sizeof(t), f1);
    }
    fclose(f1);
}

TDATA find(int key, char* filename) {
    TDATA res;
    char str[10];
    FILE* f = fopen(filename, "wb");
    while (!feof(f)) {
        int r = fread(&t, 1, sizeof(res), f);
        printf("%d, %s", res.Key, res.Data);
        if (res.Key == key) {
            return res;
        }
        if (r < sizeof(res)) {
            break;
        }
    }
    strcpy(res.Data, "No data");
    return res;
}

int main() {
    add_t("4_2_8_file.bin");
    TDATA r = find(2, "4_2_8_file.bin");
    printf("s = %s", r.Data);
}

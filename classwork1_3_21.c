#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


const int pattern = 16909060; // 00000001 00000010 00000011 00000100 for big endian

void print_info(int n) {
    printf("sizeof(n) = %zu\n", sizeof(n));
    printf("sizeof(char) = %zu\n", sizeof((char) n));
    printf("char = %d\n", (int) (char) n);
}

bool is_big() {
    return (char) pattern == 1;
}

bool is_middle() {
    return (char) pattern == 2 || (char) pattern == 3;
}

bool is_little() {
//    return (char) pattern == 4;
    return ((pattern>>24)&0xFF) == 1;
}

uint32_t to_middle(uint32_t num) {
    uint32_t swapped =
            (( num     &0xFF)<< 8) | // (data[0]<< 8)
            (((num>> 8)&0xFF)<< 0) | // (data[1]<< 0)
            (((num>>16)&0xFF)<<24) | // (data[2]<<24)
            (((num>>24)&0xFF)<<16);  // (data[3]<<16)
//            ((num>>24) & 0x000000ff) | // move byte 3 to byte 0
//            ((num<< 8) & 0x00ff0000) | // move byte 1 to byte 2
//            ((num>> 8) & 0x0000ff00) | // move byte 2 to byte 1
//            ((num<<24) & 0xff000000); // byte 0 to byte 3
//
//            (( num     &0xFF)<<24) | // (data[0]<<24)
//            (((num>>8) &0xFF)<<16) | // (data[1]<<16)
//            (((num>>16)&0xFF)<< 8) | // (data[2]<< 8)
//            (((num>>24)&0xFF)<< 0);  // (data[3]<< 0)
    return swapped;
}

int main() {
    uint32_t num = 0x12345678;
    printf("number  = %x\n", num);
//    print_info(num);
    uint32_t swapped;

    if (is_big()) {
        printf("big endian\n");
        swapped = to_middle(num);
        printf("swapped = %x\n", swapped);
    }
    else if (is_middle()) {
        printf("middle endian\n");
    }
    else if (is_little()) {
        printf("little endian\n");
        swapped = to_middle(num);
        printf("swapped = %x\n", swapped);
    }
    else {
        printf("an error happened\n");
    }
}

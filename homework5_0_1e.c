#include <stdio.h>

typedef struct Chessboard {
    int number;
    char letter;
}Chessboard;

int input(Chessboard* x) {
    printf("input row, column: ");
    scanf("%d, %c", &x->number, &x->letter);
    return 0;
}

void print(Chessboard x) {
    printf("%d%c\n", x.number, x.letter);
}

int main() {
    Chessboard field;
    input(&field);
    print(field);
}

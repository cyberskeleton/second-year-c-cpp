#include <stdio.h>
#include <stdbool.h>

typedef struct Chessboard {
    int number;
    char letter;
}Chessboard;

int input_queen( Chessboard* x) {
    printf("input row, column: ");
    scanf("%d, %c", &x->number, &x->letter);
    return 0;
}

bool can_move (Chessboard x, Chessboard y) {
    if (x.number == y.number) return true;
    if (x.letter == y.letter) return true;
    if (x.number - y.number == x.letter - y.letter) return true;
    return false;
}

int main() {
    Chessboard queen, dest;
    input_queen(&queen);
    input_queen(&dest);
    if (can_move(queen, dest)) {
        printf("correct\n");
    } else { printf("incorrect\n"); }
}

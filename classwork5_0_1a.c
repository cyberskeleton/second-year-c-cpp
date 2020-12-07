#include <stdio.h>

typedef struct Price {
    int price_kop;
    int price_hr;
}Price;

int input(Price* x) {
    printf("input hr: ");
    scanf("%i", &x.price_hr);
    printf("input kop: ");
    scanf("%i", &x.price_kop);
    return 0;
}

void print(struct Price x) {
    printf("book costs %i hr %i kop\n", x.price_hr, x.price_kop);
}
int main() {
    Price book;
    int book_hr, book_kop;
    input(&book);
    book.price_hr = book_hr;
    book.price_kop = book_kop;
    print(book);
}

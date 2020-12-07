#include <stdio.h>
#define MAX 20

typedef struct BookRequest {
    int book_code;
    char author[MAX];
    char book_name[MAX];
    int reader_ticket;
    char last_name[MAX];
    int request_day;
    int request_month;
    int request_year;
}BookRequest;

int input_book_request(BookRequest* x) {
    printf("input book code, author, book name: ");
    scanf("%i, %s, %s", &x->book_code, x->author, x->book_name);
    printf("\ninput your ticket number and last name: ");
    scanf("%i, %s", &x->reader_ticket, x->last_name);
    printf("\ninput request date: ");
    scanf("%2i, %2i, %4i", &x->request_day, &x->request_month, &x->request_year);
    return 0;
}

void print_book_request(BookRequest x) {
    printf("\nrequested book code, author, book name: %d, %s, %s\n", x.book_code,
           x.author, x.book_name);
    printf("\nrequest information: ticket number, name, date: %d, %s, %d.%d.%d\n",
           x.reader_ticket, x.last_name, x.request_day, x.request_month, x.request_year);
}

int main() {
    BookRequest book;
    input_book_request(&book);
    print_book_request(book);
}

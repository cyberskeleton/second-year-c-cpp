#include <stdio.h>

typedef struct Date {
    int day;
    int month;
    int year;
}Date;

int input(Date* x) {
    printf("input date: ");
    scanf("%2d, %2d, %4d", &x->day, &x->month, &x->year);
    return 0;
}

int find_yesterday(Date x, Date y) {
    if (x.day == 1) {
        if (x.month == 2) {
            y.day = 29;
            y.month = 1;
        }
    }
}
void print(const Date x) {
    printf("%2d, %2d, %4d\n", x.day, x.month, x.year);
}

int main() {
    Date today, yesterday;
    input(&today);
    print(today);
    find_yesterday(today, yesterday);
    print(yesterday);
}

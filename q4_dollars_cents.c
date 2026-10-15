#include <stdio.h>

int main() {
    int d1, c1, d2, c2;
    scanf("%d %d %d %d", &d1, &c1, &d2, &c2);

    int cents = c1 + c2;
    int dollars = d1 + d2 + cents / 100;   /* 100 cents = 1 dollar */
    cents = cents % 100;

    printf("%d\n%d\n", dollars, cents);
    return 0;
}

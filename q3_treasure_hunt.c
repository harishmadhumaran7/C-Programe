#include <stdio.h>

int main() {
    int total, x, y;
    scanf("%d %d %d", &total, &x, &y);

    int longBen = total * x / 100;              /* x% of total to Long Ben */
    int remaining = total - longBen;
    int blackbeard = remaining * y / 100;       /* y% of the remainder */
    remaining -= blackbeard;
    int each = remaining / 3;                   /* 3 other pirates; leftover is thrown away */

    printf("%d\n%d\n%d\n", longBen, blackbeard, each);
    return 0;
}

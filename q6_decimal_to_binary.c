#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int bits[32], i = 0;
    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bits[j]);
    printf("\n");
    return 0;
}

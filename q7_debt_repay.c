#include <stdio.h>

int main() {
    int principal, rate, years;
    scanf("%d %d %d", &principal, &rate, &years);

    float interest = (float)principal * rate * years / 100;
    float amount = principal + interest;
    float discount = interest * 0.02f;     /* 2% discount on interest */
    float settlement = amount - discount;

    printf("%.2f\n%.2f\n%.2f\n%.2f\n", interest, amount, discount, settlement);
    return 0;
}

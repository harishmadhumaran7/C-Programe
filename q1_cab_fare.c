#include <stdio.h>
#include <string.h>

int main() {
    int distance;
    char member[10];

    printf("Distance: ");
    scanf("%d", &distance);
    printf("Member (true/false): ");
    scanf("%9s", member);

    int fare = 100;
    if (distance > 10)
        fare += (distance - 10) * 20;

    if (strcmp(member, "true") == 0 || strcmp(member, "1") == 0)
        fare = fare - fare / 10;   /* 10% discount */

    printf("Final Fare: ₹%d\n", fare);
    return 0;
}

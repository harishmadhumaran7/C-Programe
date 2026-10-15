#include <stdio.h>

int main() {
    int answered, remaining, submitted;

    printf("Questions Answered: ");
    scanf("%d", &answered);
    printf("Remaining Time: ");
    scanf("%d", &remaining);
    printf("Already Submitted (1/0): ");
    scanf("%d", &submitted);

    if (answered >= 1 && remaining > 0 && submitted == 0)
        printf("Submission Allowed\n");
    else
        printf("Submission Not Allowed\n");
    return 0;
}

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (1) {
        case 1:
            if (num % 5 == 0 && num % 11 == 0) {
                printf("The number %d is divisible by both 5 and 11.\n", num);
            } else if (num % 5 == 0) {
                printf("The number %d is divisible by 5 but not by 11.\n", num);
            } else if (num % 11 == 0) {
                printf("The number %d is divisible by 11 but not by 5.\n", num);
            } else {
                printf("The number %d is not divisible by 5 or 11.\n", num);
            }
            break;

        default:
            printf("Unexpected case.\n");
            break;
    }

    return 0;
}

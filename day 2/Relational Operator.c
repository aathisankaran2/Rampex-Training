#include <stdio.h>

int main() {
    int a, b;

    // Input values
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Relational operations
    printf("\nResults of Relational Operations:\n");

    printf("%d == %d : %s\n", a, b, (a == b) ? "True" : "False");
    printf("%d != %d : %s\n", a, b, (a != b) ? "True" : "False");
    printf("%d > %d  : %s\n", a, b, (a > b) ? "True" : "False");
    printf("%d < %d  : %s\n", a, b, (a < b) ? "True" : "False");
    printf("%d >= %d : %s\n", a, b, (a >= b) ? "True" : "False");
    printf("%d <= %d : %s\n", a, b, (a <= b) ? "True" : "False");

    return 0;
}

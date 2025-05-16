#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Initial value of a: %d\n", a);
    printf("Post-increment (a++): %d\n", a++);
    printf("Value of a after post-increment: %d\n\n", a);

    printf("Initial value of b: %d\n", b);
    printf("Pre-increment (++b): %d\n", ++b);
    printf("Value of b after pre-increment: %d\n\n", b);

    int c = 5, d = 5;

    printf("Initial value of c: %d\n", c);
    printf("Post-decrement (c--): %d\n", c--);
    printf("Value of c after post-decrement: %d\n\n", c);

    printf("Initial value of d: %d\n", d);
    printf("Pre-decrement (--d): %d\n", --d);
    printf("Value of d after pre-decrement: %d\n", d);

    return 0;
}

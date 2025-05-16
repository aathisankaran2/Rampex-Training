#include <stdio.h>

int main() {
    int math, science, english;

    // Input marks
    printf("Enter marks for Math: ");
    scanf("%d", &math);

    printf("Enter marks for Science: ");
    scanf("%d", &science);

    printf("Enter marks for English: ");
    scanf("%d", &english);

    // Check pass/fail
    if (math >= 35 && science >= 35 && english >= 35) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}
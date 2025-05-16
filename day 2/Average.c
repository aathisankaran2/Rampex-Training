#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    float average;
    printf("Enter marks for 5 subjects (out of 100):\n");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
    average = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;
    printf("Average Marks = %.2f\n", average);
    if (average >= 90 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) {
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

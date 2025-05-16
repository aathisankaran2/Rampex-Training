#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    
    // Ask the user for the coefficients a, b, and c
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Use switch-case to handle different cases based on discriminant
    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: // discriminant > 0 (Real and distinct roots)
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
            break;
        case 0: // discriminant == 0 (Real and equal roots)
            root1 = -b / (2 * a);
            printf("The roots are real and equal: %.2f\n", root1);
            break;
        case -1: // discriminant < 0 (Complex roots)
            printf("The roots are complex.\n");
            break;
        default:
            printf("Unexpected case.\n");
            break;
    }

    return 0;
}

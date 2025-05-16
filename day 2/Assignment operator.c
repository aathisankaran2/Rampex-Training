#include <stdio.h>

int main() {
    int a = 10;  // Assignment operator: assigns 10 to a
    int b = 5;   // Assignment operator: assigns 5 to b
    
    // Assigning the value of a to b
    b = a;  // b now holds the value of a, so b = 10
    
    // Output the values
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    
    // Performing arithmetic operations and assignment
    a = a + 5;  // a now holds the value of a + 5, so a = 15
    b += 3;     // shorthand for b = b + 3, so b = 13
    
    // Output the updated values
    printf("Updated value of a: %d\n", a);
    printf("Updated value of b: %d\n", b);

    return 0;
}

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch) {
        case 'A'...'Z':
            printf("The character '%c' is uppercase.\n", ch);
            break;
        case 'a'...'z': 
            printf("The character '%c' is lowercase.\n", ch);
            break;
        default:
            printf("The character '%c' is neither uppercase nor lowercase.\n", ch);
            break;
    }

    return 0;
}

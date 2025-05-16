#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
    }
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character is a vowel.\n");
            break;
        default:
            if (ch >= 'a' && ch <= 'z') { 
                printf("The character is a consonant.\n");
            } else {
                printf("Invalid input! Please enter a letter.\n");
            }
            break;
    }

    return 0;
}

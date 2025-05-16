#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    
    // Hardcoded username and password
    char correctUsername[] = "user123";
    char correctPassword[] = "pass123";
    
    // Ask the user for the username
    printf("Enter username: ");
    scanf("%s", username);
    
    // Ask the user for the password
    printf("Enter password: ");
    scanf("%s", password);
    
    // Check if the username and password are correct using if-else
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password. Please try again.\n");
    }

    return 0;
}

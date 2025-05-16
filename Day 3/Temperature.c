#include <stdio.h>

int main() {
    float temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);
    if (temperature < 10) {
        printf("It's cold! Wear a jacket.\n");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("It's a bit chilly. Wear a sweater.\n");
    } else if (temperature > 20) {
        printf("It's warm! Wear a T-shirt.\n");
    } else {
        printf("Invalid temperature input.\n");
    }

    return 0;
}

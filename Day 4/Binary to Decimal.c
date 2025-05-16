#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n);

int main() {
    long long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}

int binaryToDecimal(long long n) {
    int decimalNumber = 0, i = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }

    return decimalNumber;
}
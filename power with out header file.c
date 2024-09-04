#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Read the base number from the user
    printf("Enter the base number: ");
    scanf("%d", &base);

    // Read the exponent from the user
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using a loop
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Display the result
    printf("%d raised to the power of %d is %lld\n", base, exponent, result);
    return 0;
}

Enter the base number: 2
Enter the exponent: 4
2 raised to the power of 4 is 16

[Process completed - press Enter]
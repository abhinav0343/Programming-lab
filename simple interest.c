#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Read the principal amount from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Read the rate of interest from the user
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Read the time (in years) from the user
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest using the formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}

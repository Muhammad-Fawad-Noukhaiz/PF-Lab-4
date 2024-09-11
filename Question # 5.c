#include <stdio.h>

int main() 
{
    float principal, rate_of_interest, time_period, simple_interest;

    // Display input restrictions
    printf("Enter principal amount (between 100 Rs. and 1,000,000 Rs.): ");
    scanf("%f", &principal);

    // Validate principal input
    if (principal < 100 || principal > 1000000) 
    {
        printf("Invalid principal amount. Please enter a value between 100 and 1,000,000.\n");
        return 1; // Exit with an error code
    }

    printf("Enter rate of interest (between 5% and 10%): ");
    scanf("%f", &rate_of_interest);

    // Validate rate of interest input
    if (rate_of_interest < 5 || rate_of_interest > 10) 
    {
        printf("Invalid rate of interest. Please enter a value between 5 and 10.\n");
        return 1; // Exit with an error code
    }

    printf("Enter time period (between 1 and 10 years): ");
    scanf("%f", &time_period);

    // Validate time period input
    if (time_period < 1 || time_period > 10) 
    {
        printf("Invalid time period. Please enter a value between 1 and 10.\n");
        return 1; // Exit with an error code
    }

    // Calculate simple interest
    simple_interest = (principal * rate_of_interest * time_period) / 100;

    // Print the output
    printf("\nSimple Interest: %.2f Rs.\n", simple_interest);

    return 0;
}
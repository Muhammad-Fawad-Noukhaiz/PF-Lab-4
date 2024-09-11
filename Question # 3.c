#include <stdio.h>

int main() 

{
    float salary, taxRate, taxAmount, netSalary;

    // Prompt user for salary and tax rate
    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter the tax rate (as a percentage): ");
    scanf("%f", &taxRate);

    // Validate inputs
    if (salary < 0 || taxRate < 0) 
    {
        printf("Error: Salary and tax rate must be non-negative.\n");
        return 1; // Exit with an error code
    }

    // Calculate tax amount and net salary
    taxAmount = (salary * taxRate) / 100;
    netSalary = salary - taxAmount;

    // Display results
    printf("Tax amount to be paid: %.2f\n", taxAmount);
    printf("Net salary after tax: %.2f\n", netSalary);

    return 0;
}

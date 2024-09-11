#include <stdio.h>

int main() 
{
    float fuelAverage, distance = 1207.0; // Distance for one way trip in KM
    float priceForward = 118.0, priceReturn = 123.0;
    float fuelConsumedForward, fuelConsumedReturn;
    float totalFuelConsumed, totalCost;

    // Prompt user for fuel average
    printf("Enter the car's fuel average (KM per liter): ");
    scanf("%f", &fuelAverage);

    // Validate input
    if (fuelAverage <= 0) 
    {
        printf("Error: Fuel average must be positive.\n");
        return 1; // Exit with an error code
    }

    // Calculate fuel consumption
    fuelConsumedForward = distance / fuelAverage;
    fuelConsumedReturn = distance / fuelAverage;

    // Calculate total fuel consumed and cost
    totalFuelConsumed = fuelConsumedForward + fuelConsumedReturn;
    totalCost = (fuelConsumedForward * priceForward) + (fuelConsumedReturn * priceReturn);

    // Display results
    printf("Total fuel consumed for the round trip: %.2f liters\n", totalFuelConsumed);
    printf("Total cost for the fuel: %.2f\n", totalCost);

    return 0;
}

#include <stdio.h>

int main() 
{
    // Define the coordinates of the two points
    float x1 = 5.0, y1 = 4.0;
    float x2 = 3.0, y2 = 2.0;
    float slope;

    // Calculate the slope
    if (x2 != x1) 
    {  
        // Check to avoid division by zero
        slope = (y2 - y1) / (x2 - x1);
        // Print the slope rounded to 3 decimal places
        printf("The slope between the points (%.1f, %.1f) and (%.1f, %.1f) is %.3f\n", x1, y1, x2, y2, slope);
    } 
    else 
    {
        // Handle the case where x2 == x1 (vertical line)
        printf("Error: The line is vertical, slope is undefined.\n");
    }

    return 0;
}

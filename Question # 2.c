#include <stdio.h>

int main()

{
     int num1, num2, extra;

     printf("Enter the first number: ")
     scanf("%d", &num1);

     printf("Enter the second number: ")
     scanf("%d", &num2);

     printf("\nBefore swapping:\n");
     printf("num1    = %d\n", num1);
     printf("num2    = %d\n", num2);

     // Swap the values using the extra variable
     extra = num1;
     num1  = num2;
     num2  = extra;

     printf("\nAfter swapping:\n:);
     printf("num1 = %d\n", num1);
     printf("num2 = %d\n", num2);

     return 0;
}
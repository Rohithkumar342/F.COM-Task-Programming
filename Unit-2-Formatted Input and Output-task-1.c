#include <stdio.h>

int main(void)
{
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);   

    printf("\n--- Formatted Output ---\n");
    printf("With 2 decimal places: %.2f\n", num);
    printf("With 4 decimal places: %.4f\n", num);
    printf("In scientific notation: %e\n", num);

    return 0;
}
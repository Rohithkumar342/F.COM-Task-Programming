#include <stdio.h>

int main() 
{
    int num1, num2;
    float result;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    
    result = (float)num1 / (float)num2;

    
    printf("\nDivision of %d / %d = %.2f\n", num1, num2, result);

    return 0;
}
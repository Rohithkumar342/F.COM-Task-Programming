#include<stdio.h>
int main() 
{
    float num;
    int intNum;
    float difference;

    
    printf("Enter a floating Point number: ");
    scanf("%f", &num);

    
    intNum = (int)num;

    
    difference = num - intNum;

    
    printf("\nOriginal number : %.2f", num);
    printf("\nInteger value   : %d", intNum);
    printf("\nDifference      : %.2f\n", difference);

    return 0;
}
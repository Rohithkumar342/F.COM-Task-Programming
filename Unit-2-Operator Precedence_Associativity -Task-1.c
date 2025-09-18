#include <stdio.h>

int main() 
{
    int result;

    
    result = 5 + 2 * 3;

    printf("Expression: 5 + 2 * 3\n");
    printf("Result = %d\n", result);

    
    printf("\nExplanation:\n");
    printf("1. According to operator precedence in C:\n");
    printf("   Multiplication (*) has higher precedence than Addition (+).\n");
    printf("2. So, 2 * 3 is evaluated first = 6.\n");
    printf("3. Then, 5 + 6 = 11.\n");

    return 0;
}

#include <stdio.h>

int main() 
{
    int result;

    
    result = 5 + 2 * 3;

    
    printf("Expression: 5 + 2 * 3\n");

    printf("Step 1: According to operator precedence, '*' (multiplication) is done first.\n");
    printf(" --> 2 * 3 = 6\n");

    printf("Step 2: Now expression becomes 5 + 6\n");

    printf("Step 3: Perform addition: 5 + 6 = %d\n", result);

    printf("\nFinal Result = %d\n", result);

    return 0;
}

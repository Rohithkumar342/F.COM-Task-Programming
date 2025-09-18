#include <stdio.h>

int main(void) 

{
    int a = 10, b = 20, c = 5, d = 2, e = 4, f = 3;

    
    int step1 = a + b;         
    int step2 = step1 * c;     
    int step3 = step2 / d;     
    int step4 = e % f;         
    int result = step3 - step4;

    printf("Step 1: (10 + 20) = %d\n", step1);
    printf("Step 2: %d * 5 = %d\n", step1, step2);
    printf("Step 3: %d / 2 = %d\n", step2, step3);
    printf("Step 4: 4 %% 3 = %d\n", step4);
    printf("Step 5: %d - %d = %d\n", step3, step4, result);
    printf("Final result: (10 + 20) * 5 / 2 - 4 %% 3 = %d\n", result);

    return 0;
}

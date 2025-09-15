#include<stdio.h>

int main()
{
	int num1,num2;
	
	printf("Enter First Number:");
	scanf("%d", &num1);
	
	printf("Enter Second Number:");
	scanf("%d", &num2);
	
	printf("\n Result of Arithmetic Operations: \n");
	printf("%d + %d = %d \n",num1,num2,num1+num2);
	printf("%d - %d = %d \n",num1,num2,num1-num2);
	printf("%d * %d = %d \n",num1,num2,num1*num2);
	
	if(num2 !=0)
	{
		printf("%d / %d = %.2f\n",num1,num2,(float)num1/num2);
		printf("%d %% %d = %d\n",num1,num2,num1 % num2);
	}
	else
	{
		
		printf("Division and Modulus not possible (denominator is zero).\n");
		
	}
	return 0;
}
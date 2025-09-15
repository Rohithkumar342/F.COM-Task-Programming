#include<stdio.h>

int main()
{
	float num1,num2,sum,diff,prod;
	
	printf("Enter First Number :");
	scanf("%f",&num1);
	
	printf("Enter Second Number :");
	scanf("%f",&num2);
	
	sum =num1+num2;
	diff=num1-num2;
	prod=num1*num2;
	
	printf("\n>>>>>>>Result<<<<<<< \n");
	printf("Sum = %.2f \n",sum);
	printf("Difference =%.2f\n",diff);
	printf("Product =%.2f\n",prod);
	
	return 0;
}
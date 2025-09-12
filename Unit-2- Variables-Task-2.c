#include<stdio.h>

int main()
{
	int a=5;
	int b=4;
	
	printf("Before Swap : a = %d , b = %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nAfter Swap : a= %d , b= %d \n",a,b);
	
	return 0;
}
#include<stdio.h>

int main()
{
	const float pi=3.14159;
	
	float rad,area;
	
	printf("Enter the Radius of the Radius: ");
	scanf("%f",&rad);
	
	area=pi*rad*rad;
	
	printf("Area of the Circle =%.7f \n",area);
	
	return 0;
}
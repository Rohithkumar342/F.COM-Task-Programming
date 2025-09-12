#include<stdio.h>

#define Pi 3.14159265359

int main()
{
	float rad,area;
	printf("Enter The radius of the Circle:");
	scanf("%f",&rad);
	
	area=Pi*rad*rad;
	
	printf("Area of the Circle =%.6f",area);
	
	return 0;
}
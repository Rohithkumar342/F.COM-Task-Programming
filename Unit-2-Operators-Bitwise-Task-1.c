#include<stdio.h>

int main()
{
	int a,b;
	
	printf("     Operators --> Bitwise Operators \n");
	
	printf("Enter First Integers:");
	scanf("%d",&a);
	printf("Enter Second Integers:");
	scanf("%d",&b);
	
	printf("\n Bitwise Operators \n");
	printf("a & b = %d\n",a & b);
	printf("a | b = %d\n",a | b);
	printf("a ^ b = %d\n",a ^ b);
	printf("a << 1 = %d\n",a << 1);
	printf("b >> 1 =%d\n",b >> 1);
	
	printf("\n Assignment with Bitwise \n");
	int x = a;
	x &=b;
	printf("X &= b--> %d\n",x);
	
	x=a;
	x|=b;
	printf("X |=b --> %d\n",x);
	
	x = a;
	x ^=b;
	printf("X ^=b--> %d\n",x);
	
	x=a;
	x <<=1;
	printf("x <<=1 --> %d\n",x);
	
	x=b;
	x >>=1;
	printf("x >>=1 --> %d\n",x);
	
	printf("\n Conditional Operator \n");
	int max =(a>b) ? a:b;
	
	printf("Maximum of a and b =%d\n",max);
	
	int bitwise=(a&b)?1:0;
	
	printf("(a & b) is %s\n",bitwise ? "Non-Zero":"Zero");
	
	return 0;
}
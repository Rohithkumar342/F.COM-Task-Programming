#include<stdio.h>

int main()
{
	int a;
	
	printf("Enter a number :");
	scanf("%d",&a);
	
	(a>0)? 
	printf("%d is Postive \n",a):
	(a<0)? 
	printf("%d is Negative \n",a):
	
	printf("%d is Zero \n",a);
	
	return 0;
}
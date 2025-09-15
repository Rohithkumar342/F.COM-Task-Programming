#include<stdio.h>

int main()
{
	int age;
	char name[10];
	int mark;
	
	printf("Enter Your Name: ");
	scanf(" %s",name);
	
	printf("\nEnter Your Age: ");
	scanf(" %d",&age);
	
	printf("\nEnter Your Mark: ",mark);
	scanf(" %d",&mark);
	
	
	printf("\n\n>>>>>>>> Students Details <<<<<<<<<<<");
	printf("\n The Name : %s",name);
	printf("\n The Age : %d",age);
	printf("\n The Mark : %d",mark);
	
	return 0;
}
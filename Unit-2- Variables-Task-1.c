#include<stdio.h> 

int main()
{
	
	char name[30];
	int age;
	char grade;
	
	printf("Enter the  Name: ");
	scanf("%s",&name);
	printf("Enter the Age: ");
	scanf(" %d",&age);
	printf("Enter Your Grade :");
	scanf(" %c",&grade);
	
	printf("\n <<<Students Details>>>\n");
	printf("Name : %s \n",name);
	printf("Age : %d \n",age);
	printf("Grade : %c \n",grade);
	
	return 0;
	
}
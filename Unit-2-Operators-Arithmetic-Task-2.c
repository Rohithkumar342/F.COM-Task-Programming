#include<stdio.h>

int main()

{
	int age;
	char citizen;
	
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	printf("Are Your A Citizen of the Country? (Y/N):");
	scanf(" %c",&citizen);
	
	if((age >=18) && (citizen =='y'))
	{
		printf("Your are eligible to Vote \n");
		
	}
	else
	{
		printf("You are Not eligible to vote \n");
	}
	return 0;
}
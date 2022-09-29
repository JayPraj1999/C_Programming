//Find Even Odd using if else statement

#include<stdio.h>

int main()
{
	
	int a;
	
	printf("Enter any value to check : ");
	scanf("%i",&a);
	
	if(a==0)
	{
		printf("\nZero...!");
	}
	else if(a%2==0)
	{
		printf("\nEven Number...!");
	}
	else
	{
		printf("\nOdd Number...!");
	}
	
	return 0;
}
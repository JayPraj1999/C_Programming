//Create function for switch program.

#include<stdio.h>
int addition(int a, int b)
{
	
	printf("sum = %i",a+b);
	
}

int findMax(int a,int b)
{
	int max;
	max = (a>b) ? a : b;
	printf("Max value is = %i",max);
}


int main()
{
	
	int choice,a,b;
	printf("\nEnter 1 For addition : ");
	printf("\nEnter 2 For Find Maximum : ");
	scanf("%i",&choice);
	
		printf("\nEnter the value of a : ");
			scanf("%i",&a);
			printf("\nEnter the value of b : ");
			scanf("%i",&b);
			
	
	switch(choice)
	{
		case 1: 
		{
			addition(a,b);
		}
		break;
		
		case 2:
			{
				findMax(a,b);
			}
		break;
		
		default:
			printf("Invalid Choice...!");
	}
	
	return 0;
}
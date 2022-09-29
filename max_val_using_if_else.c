//Find Max Value using if else statement.

#include<stdio.h>

int main()
{
	
	int a,b,c;
	
	printf("\nEnter value of A : ");
	scanf("%i",&a);
	printf("\nEnter value of B : ");
	scanf("%i",&b);
	printf("\nEnter value of C : ");
	scanf("%i",&c);
	
	if(a>b && a>c)
	{
		printf("Maximum Value is A = %i",a);
	}
	else if(b>c)
	{
		printf("Maximum Value is B = %i",b);
	}
	else
	{
		printf("Maximum Value is C = %i",c);
	}
	return 0;
}
// Multiple scanf function.

#include<stdio.h>

int main()
{
	int a;
	float b;
	char c;
	
	
	
	printf("Please enter any Character value first = ");
	scanf("%c",&c);
	
	printf("\nPlease enter any integer value = ");
	scanf("%i",&a);
	
	
	printf("\nPlease enter any float value = ");
	scanf("%f",&b);
	
	
	printf("\nFirst you entered = %c",c);
	printf("\nThen you entered = %i",a);
	printf("\nAt the end you entered = %f",b);
	
	return 0;
}
//create function with user input.

#include<stdio.h>
int findMax(int a,int b)
{
	int max;
	max = (a>b) ? a : b;
	printf("Max value is = %i",max);
}


int main()
{
	int a,b;
	printf("Enter the value of a :\n");
	scanf("%i",&a);
	printf("Enter the value of b :\n");
	scanf("%i",&b);
	
	findMax(a,b);
	
	return 0;
}
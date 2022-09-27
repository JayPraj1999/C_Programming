// Find maximum value using Ternary Operator

#include<stdio.h>

int main()
{
	
	int a, b, max;
	
 	/*max = (a>b) ? a : b ;
	printf("%i", max); */
	
//	printf("Maximum Value is : %i", (a>b) ? a : b);
	
	printf("Please enter any two value : ");
	scanf("%i %i", &a,&b);
	printf("Maximum Value is = %i", (a>b) ? a : b ); 
	
	return 0;
	
}
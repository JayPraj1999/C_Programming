// Find Max Value out of three using ternary Operator

#include<stdio.h>

int main()
{
	
	int a=25,b=16,c=10, max;
	
//	max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c ; 
	
//	printf("%i", (a>b) ? (a>c) ? a : c : (b>c) ? b : c);

	printf("print any three value to check : ");
	scanf("%i %i %i",&a,&b,&c);
	printf("\nMax Value out of three is : %i", (a>b)?(a>c)?a:c : (b>c)?b:c);
	
	return 0;
}
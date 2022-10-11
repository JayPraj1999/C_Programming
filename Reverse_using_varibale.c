//Print Reverse Number with user input using other variable.
#include<stdio.h>

int main()
{

	int a,mod,remaining=0;
	printf("Enter number to print : ");
	scanf("%i",&a);
	while(a != 0)
	{
		
		mod = a%10;
	
		remaining = remaining*10+mod;
		
		a = a/10;
		
		
	}

	printf("%i",remaining);

	return 0;
}
//Prime number.

#include<stdio.h>

int main()
{
	
	int a,b;
	printf("Enter Number To check : ");
	scanf("%i",&a);

	
		for(b=2;b<=a;b++)
		{
			if(a%b==0)
			{
				printf("Not Prime number");
				break;
			}
			else
			{
				printf("prime number");
				break;
			}
			
	
	}
	
	return 0;
}
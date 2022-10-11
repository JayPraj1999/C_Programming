//Prime number.

#include<stdio.h>

int main()
{
	
	int a,b;
	printf("Enter Number To check : ");
	scanf("%i",&a);
	if(a==1)
	{
		printf("\n1 is a prime number.");
	}
	else
	{
		for(b=2;b<=a;b++)
		{
			if(a%b==0)
			{
				printf("Not Prine number");
				break;
			}
			else
			{
				printf("primr number");
				break;
			}
		}	
	
	}
	
	return 0;
}
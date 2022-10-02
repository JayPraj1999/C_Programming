//Find largest value using neasted if.

#include<stdio.h>

int main()
{
	
	int a=51,b=7,c=12;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("Largest value is A.");
		}
		else
		{
			printf("Largest Value is C.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("Largest value is B.");
		}
		else
		{
			printf("Largest Value is C.");
		}
	}
	
	return 0;
}
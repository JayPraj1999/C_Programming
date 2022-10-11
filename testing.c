//Print Hello in while loop.

#include<stdio.h>

int main()
{
	
	char y,n,temp,ask;
	
	temp='y';
	while(temp=='y')
	{
		printf("Hello...!\n");
		
		printf("Do you want to continue it ??");
		scanf("%c",&ask);
		if(ask=='y')
		{
			temp='y';
		}
		else
		
		{
			temp='n';
		}
		
	}
	
	return 0;
}
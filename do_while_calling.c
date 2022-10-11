//Do while calling with user

#include<stdio.h>

int main()
{
	
	char ask;
	ask='y';
	do
	{
		printf("Hello \n");
		
		printf("Do you want to continue it (Y|N) : ");
		scanf("%c",&ask);
		
	}while(ask == 'Y' || ask == 'y');
	
	return 0;
}
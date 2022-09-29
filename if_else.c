// check Positive/Nagetive value using If Else Program

#include<stdio.h>

int main()
{
	int a;
	
	printf("\n Enter value : ");
	scanf("%i",&a);
	
	if(a<0)
	{
		printf("Negative Value");
	}
	else if(a>0)
	{
		printf("Positive Value");
	}
	else
	{
		printf("Zero...!");
	}
	return 0;
}
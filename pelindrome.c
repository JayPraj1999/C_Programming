//Check number is pelindrome or not.

#include<stdio.h>

int main()
{

	int a,mod,num,remaining=0;
	
	printf("Enter number to print : ");
	scanf("%i",&a);
	num=a;
	while(a != 0)
	{
		
		mod = a%10;
	
		remaining = remaining*10+mod;
		
		a = a/10;
		
		
	}

	printf("%i",remaining);
	
	if(num == remaining)
	{
		printf("\nPelindrome Number...!");
	}
	else
	{
		printf("\nNot Pelindrome Number...!");
	}

	return 0;
}
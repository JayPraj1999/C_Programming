//Prime number.

#include<stdio.h>

int main()
{
	
	int a;
	
	printf("Enter any ineger value : \n");
	scanf("%i",&a);
	
	if(a%1==0 || a%a!=1)
	{
		printf("prime number...!");
	}
	else
	{
		printf("not prime number...!");
	}
	
	return 0;
}
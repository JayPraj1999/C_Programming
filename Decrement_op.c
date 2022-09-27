//Decreament Operator.

#include<stdio.h>

int main()
{
	int a = 10;
	
	printf("%i\n",a); //10
	printf("%i\n",a--); //10
	printf("%i\n",a--); //9
	printf("%i\n",--a); //7
	printf("%i\n",--a); //6
	printf("%i\n",a--); //6
	printf("%i\n",--a); //4
	printf("%i\n",a--); //4
	printf("%i\n",a); //3
	
	return 0;
}
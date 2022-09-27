//Increament Operator.

#include<stdio.h>

int main()
{
	int a = 5;
	
	printf("%i\n",a); //5
	printf("%i\n",a++); //5
	printf("%i\n",a++); //6
	printf("%i\n",++a); //8
	printf("%i\n",++a); //9
	printf("%i\n",++a); //10
	printf("%i\n",a++); //10
	printf("%i\n",a); //11
	
	return 0;
}
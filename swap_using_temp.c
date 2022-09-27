// Swap two values using third variable.

#include<stdio.h>

int main()
{
	
	int a=5, b=10, temp;
	
	printf("befor swapping :\n a = %i\n b = %i",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("befor swapping :\n a = %i\n b = %i",a,b);
	
	return 0;
	
}
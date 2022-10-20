//explain return keyword

#include<stdio.h>

int addition(int a, int b) //void can not return anything.
{
	printf("function not returning only print value %i %i\n",a,b);
	return a+b;
}

int main()
{
	
	
	printf("function returning %i",addition(15,5));
	
	return 0;
}
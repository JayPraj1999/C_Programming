//explain recursive function

#include<stdio.h>

int recursion(int a)
{
	if(a<=10)
	{
		printf("%i\n",a);
		recursion(a+1);
	}
}

int main()
{
	recursion(1);
	
	return 0;
}
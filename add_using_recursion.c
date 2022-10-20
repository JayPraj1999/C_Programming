//Addition using recursive function

#include<stdio.h>
int add_rec(int a)
{
	if(a<5)
	{
		return a + add_rec(a+1);
	}
	
}

int main()
{
	printf("%i",add_rec(1));
	return 0;
}
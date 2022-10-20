//Find factorial number using recursive function

#include<stdio.h>
int add_rec(int a)
{
	if(a>1)
	{
		return a * add_rec(a-1);
	}
	
}

int main()
{
	int num;
	
	printf("Enter number you want to find factorial : ");
	scanf("%i",&num);
	printf("%i",add_rec(num));
	return 0;
}
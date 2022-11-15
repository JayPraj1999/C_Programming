//program for eccessing global variable.

#include<stdio.h>

int a=20;
int main()
{
	int a=10;
	printf("Local variable A = %d\n",a);
	{
        extern int a;
        printf("Global variable A = %d\n", a);
    }
	
	return 0;
}
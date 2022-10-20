//Explain storage classes.

//auto 
//register
//extern
//static

extern int d=5; // extern is used as global variabl declaration we can use it in any function when it require.

int addition(int a,int b,int c)
{
	
	return a+b+c+d;
}

#include<stdio.h>
int main()
{
	int a; //there is no needs to write auto keyword because it is dynamically.
	auto int b;//if you write auto there is no any changes with priviously initalized a.
	register int c; // it store in memory location like rom. it is faster then auto.
	
	printf("Function returning %i",addition(5,5,5));
}
//explain static variable.

#include<stdio.h>

int TestStatic()
{
	int x=1;
	static int y=1; //Static variable hold the last value of the variable, we can not override it.
	printf("A = %i    B = %i\n",x,y); 
	
	x++;
	y++;

	
	return 0;
}

int main()
{
	TestStatic();
	TestStatic();
	TestStatic();
	TestStatic();
	TestStatic();
	TestStatic();

	return 0;
}
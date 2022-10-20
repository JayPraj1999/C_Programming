//explain goto statement

#include<stdio.h>
int main()
{
	
	int a=1;
	
label:	if(a<=10)
	{
		printf("%i\n",a);
		a++;
		goto label;
	}
	
	return 0;
}
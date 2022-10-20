//Explain Use of break statement

#include<stdio.h>
int main()
{
	
	int a;
	
	for(a=1;a<=10;a++)
	{
		if(a==6)
		{
			break;
		}
		
		printf("%i\n",a);
	}
	
	return 0;
}
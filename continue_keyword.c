//Explain continue keyword

#include<stdio.h>
int main()
{
	int a;
	
	for(a=1;a<=10;a++)
	{
		if(a==4 || a==7 || a==10)
		{
			continue;
		}
		printf("%i\n",a);
	}
	
	return 0;
}
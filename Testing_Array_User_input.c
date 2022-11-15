//Testing of 1-D array with user input

#include<stdio.h>

int main()
{
	
	int i,a[5];
	
	for(i=0;i<5;i++)
	{
		scanf("%i\n",&a[i]);
	}

	printf("------Print Data-------");
	
	for(i=0;i<5;i++)
	{
		printf("%i\n",a[i]);
	}
	return 0;
}
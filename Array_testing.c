//Create simple Array and print it.

#include<stdio.h>

int main()
{
	
	int a[5]={};
	int i;
	for(i=0;i<=4;i++)
	{
	//	printf("%d",i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	return 0;
}
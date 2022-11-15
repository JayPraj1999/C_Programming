//Testing of 2-D array

#include<stdio.h>

int main()
{
	
	int i,j,k,l;
	int a[2][2],b[2][2],c[2][2];
	
	printf("------For A----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		
	
	printf("------For B----------\n");
	
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			scanf("%d\n",&b[k][l]]);
		}
	}
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			printf("%d\t",b[k][l]);
		}
		printf("\n");
	}
		
	
	printf("------For Addition----------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c=a[i][j]+b[k][l];
		}
	}
	
	printf("------For Print Addition----------\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
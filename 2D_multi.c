#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l,m,n;
	int a[2][2],b[2][2],c[2][2];
	int multi;
	printf("---Enter For A---\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("---Enter for B---\n");
	for(k=0;k<2;k++)
	{
		for(l=0;l<2;l++)
		{
			scanf("%d",&b[k][l]);
		}
	} 
	printf("----Print A----\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("----Print B----\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	printf("-----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

	
}
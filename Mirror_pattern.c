//Print Mirror Pattern.

#include<stdio.h>
int main()
{
	
	int row,col;
	
	for(row=5;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf(" ");
		}
		for(col=5;col>=row;col--)
		{
			printf("#");
		}
		printf("\n");
	}
	
	return 0;
}
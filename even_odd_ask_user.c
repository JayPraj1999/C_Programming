//Even Odd number as per user choice.

#include<stdio.h>
int main()
{
	
	int a,range,choice;
	printf("Please enter range : ");
	scanf("%i",&range);
	printf("\n\nWhat you want to do : ");
	printf("\nEnter 1 for find even number : ");
	printf("\nEnter 2 for find odd number : ");
	scanf("%i",&choice);
	switch(choice)
	{
		case 1 : 
		for(a=1;a<=range;a++)
		{
	
				if(a%2==0)
				{
					printf("%i\n",a);
				}
		}	
		break;
		
		case 2 :
			
			for(a=1;a<=range;a++)
			{
				
				if(a%2 != 0)
				{
					printf("%i\n",a);
				}
			}	
			
		break;
		
		default: 
			printf("Invalid Choice....!");
	}

	return 0;
}
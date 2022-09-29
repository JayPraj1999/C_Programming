//Find great according to marks

#include<stdio.h>

int main()
{
	
	int math,sci,phy,eng;
	float total,percentage;
	
	printf("\nEnter Marks of Maths : ");
	scanf("%i",&math);
	printf("\nEnter Marks of Science : ");
	scanf("%i",&sci);
	printf("\nEnter Marks of Physics : ");
	scanf("%i",&phy);
	printf("\nEnter Marks of English : ");
	scanf("%i",&eng);
	
	total = math+sci+phy+eng;
	
	percentage = total/4;
	
	printf("\n\nTotal Obtain marks is : %.f",total);
	printf("\n\nPercentage is : %.f",percentage);
	
	if(percentage >= 90)
	{
		printf("\n\nGrade A");
	}
	else if(percentage >= 70)
	{
		printf("\n\nGrade B");
	}
	else if(percentage >= 50)
	{
		printf("\n\nGrade C");
	}
	else if(percentage >= 35)
	{
		printf("\n\nGrade D");
	}
	else
	{
		printf("\n\nFail...!");
	}
	
	
		
	return 0;
}
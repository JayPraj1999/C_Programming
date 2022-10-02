//Check Alphabet or not.

#include<stdio.h>

int main()
{
	
	char ch;
	
	printf("Enter any Character : ");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	{
		printf("Character...!");
	}
	else
	{
		printf("Not a Character...!");
	}
	
	return 0;
}
//String functions

#include<stdio.h>
#include<string.h>

int main()
{
	
	char a[5],b[5],c;
		printf("Enter Name : ");
	scanf("%s",&a);
	scanf("%s",&b);
	c=strcat(a,b);
	printf("%s",c);

	
//	puts("Enter Name : ");
//	gets(a);
//	puts(a);
	
//	printf("Total length of the string is : %d\n",strlen(a));//strlen return the lenghth of the string
//	printf("Reverse of the string is : %s\n",strrev(a));
//	printf("Copy of the string is : %s\n",strcpy(b,a));
//	gets(b);
//	puts(b);
//	printf("combine two string using function is : %s", strcat(a,b));
		
	return 0;
}
//Testing of string.

#include<stdio.h>
#include<string.h>

int main()
{
	
	char a[5]; //string is initialized with int datatype with size of the array.
	puts("Enter Name : ");
	gets(a);
	puts(a);
	
//	printf("%s\n",a);
	
	for(int i=0;i<strlen(a);i++)
	{
		printf("a[%d] %c\n",i,a[i]);
	}
	return 0;
}
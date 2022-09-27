//Display Your Personal Data

#include<stdio.h>

int main()
{
	  int age;
	  char name[20];
	  char add[90];
	  char dob[50];
	  
	  printf("\nEnter Your age : ");
	  scanf("%d",&age);
	  printf("Enter Your Name : ");
	  scanf("%s",&name);
	  printf("\nEnter Your Address : ");
	  scanf("%s",&add);
	  printf("\nEnter Your Date Of Birth : ");
	  scanf("%s",&dob);
	  
	  
	  
	  printf("\nYour age is %d.",age);
	  printf("\nYour Name is %s.",name);
	  printf("\nYour Address is %s.",add);
	  printf("\nYour date of Birth is %s.",dob);
	
	  
	 
	return 0;
}
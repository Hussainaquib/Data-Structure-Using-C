// write a program to copy a string from one variable to another variable using string function

#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("Enter the string:");
	gets(str1);
	printf("\nString 1= %s",str1);
	strcpy(str2,str1);
	printf("\nthe copy string is %s",str2);
}
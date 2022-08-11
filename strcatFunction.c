// concatenate a string using string function

#include<stdio.h>
#include<string.h>

void main()
{
	char str1[30],str2[30];
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string:");
	gets(str2);
	strcat(str1,str2);
	printf("concatenate string is %s",str1);
} 
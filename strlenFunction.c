// find length of string using string function

#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i;
	
	printf("Enter the string:");
	scanf("%s",str);
	printf("The string length is %d",strlen(str));
	return 0;
}
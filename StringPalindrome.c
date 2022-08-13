// check given string is palindrome or not

#include<stdio.h>
#include<string.h>

void main()
{
	char str[30];
	int i,length;
	int flag=0;
	
	printf("Enter the string:");
	gets(str);
	length = strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i] != str[length-i-1])
		{
			flag = 1;
			break;
		}
	}
	if(flag)
	{
		printf("%s is not a palindrome",str);
	}
	else
	{
		printf("%s is palindrome",str);
	}
}





// reverse the string using string function

#include<stdio.h>
#include<string.h>
void main(){
	char str[30];
	printf("Enter the string:");
	gets(str);
	printf("the reverse string is %s",strrev(str));
}
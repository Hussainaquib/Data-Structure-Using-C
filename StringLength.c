//program to find string length without string function

#include<stdio.h>
void main(){
	char a[100];
	int i;
	printf("Enter the string:");
	scanf("%s",a);
	for(i=0;a[i] != '\0';i++);
	printf("length of string is %d",i);
}
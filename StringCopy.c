// program to copy one to another without string function

#include<stdio.h>
int main(){
	int c = 0;
	char str1[1000],str2[1000];
	printf("Enter the string:");
	gets(str1);
	while(str1[c] != '\0'){
	str2[c] = str1[c];
	c++;
}
	str2[c] = '\0';
	printf("After copying string is:%s",str2);
	return 0;
}
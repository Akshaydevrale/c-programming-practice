#include<stdio.h>

// Program to find length of a string without using built-in functions

char lengthOfString(char [],int);
void main(){
	char str[10];
	printf("Enter string: ");
	scanf("%s",str);
	
	int length=lengthOfString(str,10);
	printf("Length of string is: %d",length);
}

char lengthOfString(char str[],int size){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}
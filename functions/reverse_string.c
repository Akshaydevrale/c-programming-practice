#include<stdio.h>

// Program to reverse a string without using built-in functions

int count(char[]);
void reverseString(char [],int);
void main(){
	char str[20];
	printf("Enter string: ");
	scanf("%s",str);
	
	int cnt=count(str);
	reverseString(str,cnt);
}

int count(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
}

void reverseString(char str[],int cnt){
	printf("Reverse String: ");
	for(int i=cnt-1;i>=0;i--){
		printf("%c",str[i]);
	}
}
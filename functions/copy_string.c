#include<stdio.h>

// Program to copy one string into another without using built-in functions

void copyString(char [],char []);
void display(char [],char []);
void main(){
	char str[10];
	printf("Enter String: ");
	scanf("%s",str);
	
	char cpy[10];
	
	copyString(str,cpy);
	display(str,cpy);
}

void copyString(char str[],char cpy[]){
	int i=0;
	while(str[i]!='\0'){
		cpy[i]=str[i];
		i++;
	}
	cpy[i]='\0';
}

void display(char str[],char cpy[]){
	printf("Original string: %s\n",str);
	
	printf("Copied string: %s",cpy);
}


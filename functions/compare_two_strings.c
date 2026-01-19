#include<stdio.h>

// Program to compare two strings without using built-in functions

void displayResult(int);
int compareString(char [],char []);
void main(){
	char str1[20],str2[20];
	printf("Enter first string: ");
	scanf("%s",str1);
	printf("Enter second string: ");
	scanf("%s",str2);
	
	int result=compareString(str1,str2);
	displayResult(result);
}

int compareString(char str1[],char str2[]){
	int i=0,flag=1;
	while(str1[i]!='\0' || str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			flag=0;
		}
		i++;
	}
	return flag;
}

void displayResult(int result){
	if(result){
		printf("Strings are same");
	}else{
		printf("Strings are not same");
	}
}
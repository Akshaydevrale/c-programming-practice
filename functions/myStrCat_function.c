#include<stdio.h>
#include<string.h>

// Program to concatenate two strings
// Custom implementation of strcat()

void myStrCat(char*,char*);
void main(){
	char str1[20]="firstbit";
	char str2[10]="solutions";
	
	myStrCat(str1,str2);
	printf("%s",str1);
}

void myStrCat(char*p1,char*p2){
	int len=strlen(p1);
	int i,j;
	for(i=0,j=len;p2[i]!='\0';i++,j++){
		p1[j]=p2[i];
	}
	p1[j]='\0';	
}
//Function With parameter without return type

#include<stdio.h>

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

void main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	
	addition(a,b);
	subtraction(a,b);
	multiplication(a,b);
	division(a,b);
}

void addition(int a,int b){
	printf("Addition of two numbers is: %d\n",a+b);
}

void subtraction(int a,int b){
	printf("Subtraction of two numbers is: %d\n",a-b);
}

void multiplication(int a,int b){
	printf("Multiplication of two numbers is: %d\n",a*b);
}

void division(int a,int b){
	printf("Division of two numbers is: %d",a/b);
}

// Function Without parameter without return type

#include<stdio.h>
void addition();
void subtraction();
void multiplication();
void division();
void main(){
	int choice;
	printf("Enter your choice 1(+), 2(-), 3(*), 4(/) :");
	scanf("%d",&choice);
	
	if(choice==1){
		addition();
	}else if(choice==2){
		subtraction();
	}else if(choice==3){
		multiplication();
	}else if(choice==4){
		division();
	}
}
void addition(){
	int a,b;
	printf("Enter two values for addition:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int c=a+b;
	printf("Addition of two numbers is: %d",c);
}
void subtraction(){
	int a,b;
	printf("Enter two values for subtraction:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int c=a-b;
	printf("Subtraction of two numbers is: %d",c);
}
void multiplication(){
	int a,b;
	printf("Enter two values for multiplication:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int c=a*b;
	printf("Multiplication of two numbers is: %d",c);
}
void division(){
	int a,b;
	printf("Enter two values for division:");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int c=a/b;
	printf("Division of two numbers is: %d",c);
}


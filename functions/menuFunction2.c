//Function Without parameter with return type

#include<stdio.h>

int addition();
int subtraction();
int multiplication();
int division();

int main(){
	int choice;
	printf("Enter your choice 1(+), 2(-), 3(*), 4(/) :");
	scanf("%d",&choice);
	int res;
	
	if(choice==1){
		res=addition();
		printf("Addition of two numbers is :%d",res);
	}else if(choice==2){
		res=subtraction();
		printf("Subtraction of two numbers is :%d",res);
	}else if(choice==3){
		res=multiplication();
		printf("Multiplication of two numbers is :%d",res);
	}else if(choice==4){
		res=division();
		printf("Division of two numbers is :%d",res);
	}else{
		printf("Invalid choice...");
	}
}

int addition(){
	int a,b;
	printf("Enter two numbers for Addition:");
	scanf("%d",&a);
	scanf("%d",&b);
	return a+b;
}

int subtraction(){
	int a,b;
	printf("Enter two numbers for subtraction:");
	scanf("%d",&a);
	scanf("%d",&b);
	return a-b;
}

int multiplication(){
	int a,b;
	printf("Enter two numbers for multiplication:");
	scanf("%d",&a);
	scanf("%d",&b);
	return a*b;
}

int division(){
	int a,b;
	printf("Enter two numbers for division:");
	scanf("%d",&a);
	scanf("%d",&b);
	return a/b;
}


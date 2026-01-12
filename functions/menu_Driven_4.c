//Function with parameter with return type

#include<stdio.h>

int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

void main(){
	int choice,a,b;
	printf("Enter your choice 1.Addition(+), 2.Subtraction(-), 3.Multiplication(*), 4.Division(/) :");
	scanf("%d",&choice);

	printf("Enter two numbers: ");
		scanf("%d %d",&a,&b);
		
	if(choice==1){
		int res=addition(a,b);
		printf("Addition of two numbers is: %d",res);
	}else if(choice==2){
		int res=subtraction(a,b);
		printf("Subtraction of two numbers is: %d",res);
	}else if(choice==3){
		int res=multiplication(a,b);
		printf("Multiplication of two numbers is: %d",res);
	}else if(choice==4){
		int res=division(a,b);
		printf("Division of two numbers is: %d",res);
	}else{
		printf("Invalid choice...");
	}
}

int addition(int a,int b){
	return a+b;
}

int subtraction(int a,int b){
	return a-b;
}

int multiplication(int a,int b){
	return a*b;
}

int division(int a,int b){
	return a/b;
}

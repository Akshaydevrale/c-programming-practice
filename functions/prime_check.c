//check prime number using function without parameter, with return type

#include<stdio.h>

int isPrime();

void main(){
	
	if(isPrime()){
		printf("Number is prime");
	}else{
		printf("Number is not prime");
	}
}

int isPrime(){
	int no;
	printf("Enter number to check prime or not :");
	scanf("%d",&no);
	int i;
	for(i=2;i<no;i++){
		if(no%i==0){
			return 0;	
		}
	}
	return 1;
}

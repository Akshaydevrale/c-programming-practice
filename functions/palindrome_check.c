//check palindrome number, using function without parameter without return type

#include<stdio.h>

void palindrome();

void main(){
	
	palindrome();
}

void palindrome(){
	int no,r,res=0;
	printf("Enter number to check palindrome :");
	scanf("%d",&no);
	int temp=no;
	while(no>0){
		r=no%10;
		res=res*10+r;
		no=no/10;
	}
	if(temp==res){
		printf("Number is Palindrome");
	}else{
		printf("Number is not palindrome");
	}
}

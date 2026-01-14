//addition of first and last digit using function with parameter without return type

#include<stdio.h>

void firstAndLast(int no);
void main(){
	int no;
	printf("Enter number greater than 9:");
	scanf("%d",&no);
	if(no>9){
		firstAndLast(no);	
	}else{
		printf("Invalid choice...");
	}
	
}

void firstAndLast(int no){
	int first;
	int last=no%10;
	while(no>0){
		first=no%10;
		no=no/10;
	}
	printf("Addition of first and last digit %d",first+last);
}

//check armstrong number using function with parameter with return type

#include<stdio.h>

int count(int);
int power(int,int);
void main(){
	int no;
	printf("Add number to check Armstrong or not: ");
	scanf("%d",&no);
	
	int res1=count(no);
	int res2=power(res1,no);
	
	if(res2==no){
		printf("Armstrong");
	}else{
		printf("Not Armstrong");
	}
}

int count(int no){
	int cnt=0;
	while(no>0){
		cnt++;
		no=no/10;
	}
	return cnt;
}

int power(int res1,int no){
	int i,r,sum=0;
	while(no>0){
		r=no%10;
		int res=1;
		for(i=1;i<=res1;i++){
			res=res*r;
		}
		sum=sum+res;
		no=no/10;
	}
	return sum;
}




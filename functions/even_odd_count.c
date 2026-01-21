#include<stdio.h>

// Program to count even and odd numbers in an array

int evenCount(int [],int);
int oddCount(int [],int);
void display(int,int);

void main(){
	
	int arr[10]={2,2,4,5,6,8,10,11,12,20};
	
	int e=evenCount(arr,10);
	int o=oddCount(arr,10);
	display(e,o);
}

int evenCount(int arr[],int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2==0){
			count++;
		}
	}
	return count;
}

int oddCount(int arr[],int size){
	int count=0;
	for(int i=0;i<size;i++){
		if(arr[i]%2!=0){
			count++;
		}
	}
	return count;
}

void display(int e,int o){
	printf("Count of even numbers is: %d\n",e);
	printf("Count of odd numbers is: %d",o);
}
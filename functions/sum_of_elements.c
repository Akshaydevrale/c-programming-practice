#include<stdio.h>

// Program to find sum of all elements in an array
// Using function with parameter and return type

void display(int);
int sumOfArray(int [],int);

void main(){
	int arr[10]={4,3,2,5,4,3,2,1,4,2};
	
	int s=sumOfArray(arr,10);
	display(s);
}

int sumOfArray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}

void display(int s){
	printf("Sum of all elements in array is: %d",s);
}
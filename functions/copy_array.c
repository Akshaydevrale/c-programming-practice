#include<stdio.h>

// Program to copy elements of one array into another

void copy(int [],int [],int);
void main(){
	int arr[10]={4,3,2,1,5,6,9,8,7,10};
	int brr[10];
	
	copy(arr,brr,10);
	
	printf("Copied array: ");
	for(int i=0;i<10;i++){
		printf("%d ",brr[i]);
	}
}

void copy(int arr[],int brr[],int size){
	for(int i=0;i<size;i++){
		brr[i]=arr[i];
	}
}
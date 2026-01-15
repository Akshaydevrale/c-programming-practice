#include<stdio.h>

// Function to search an index of a number in array

int search(int*,int,int);

void main(){
	int arr[10]={20,54,30,77,87,47,26,83,90,100};
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int index=search(arr,10,no);
	
	if(index==-1){
		printf("Number not found...");
	}else{
		printf("Number found at index :%d",index);
	}
}

int search(int*arr,int size,int no){
	int i;
	for(i=0;i<size;i++){
		if(no==arr[i])
			return i;
	}
	return -1;
}

#include<stdio.h>

void findCommon(int [],int [],int [],int);
void display(int[],int);
void main(){
	int arr[5]={2,4,5,6,8};
	int brr[5]={9,1,3,5,6};
	int common[5];
	
	findCommon(arr,brr,common,5);
	display(common,5);
}
void findCommon(int arr[],int brr[],int common[], int size){
	
	for(int i=0;i<size;i++){
		common[i]=-1;
		for(int j=0;j<size;j++){
			if(arr[i]==brr[j]){
				common[i]=arr[i];
			}
		}
	}
}

void display(int comman[],int size){
	printf("Common elemens in array: ");
	for(int i=0;i<size;i++){
		if(comman[i]!=-1){
			printf("%d ",comman[i]);
		}
	}	
}
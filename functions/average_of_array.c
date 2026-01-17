#include <stdio.h>

// Program to calculate average of array elements

int sumOfArray(int arr[],int size);
int average(int sum,int size);

int main() {
    int arr[10]={4,3,2,5,4,3,2,1,4,2};

    int sum=sumOfArray(arr,10);
    int avg=average(sum,10);

    printf("Average of array elements is: %d",avg);
}

int sumOfArray(int arr[], int size) {
    int sum=0;

    for(int i=0;i<size;i++) {
        sum=sum+arr[i];
    }
    return sum;
}

int average(int sum, int size) {
    return sum/size;
}

#include <stdio.h>

// Program to find maximum and minimum element in an array using functions

int findMax(int arr[], int size);
int findMin(int arr[], int size);

int main() {
    int arr[10];

    printf("Enter 10 numbers in array:\n");
    for (int i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }

    int max=findMax(arr,10);
    printf("Maximum number in array is: %d\n",max);

    int min=findMin(arr,10);
    printf("Minimum number in array is: %d",min);
}

int findMax(int arr[], int size) {
    int max=arr[0];

    for(int i=1;i<size;i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min=arr[0];

    for(int i=1;i<size;i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    return min;
}

#include <stdio.h>

// Program to count occurrences of a number in an array

int countOccurrences(int arr[],int size,int key);

int main() {
    int arr[10]={4,3,6,4,8,9,3,5,6,4};
    int key;

    printf("Enter number to count: ");
    scanf("%d",&key);

    int count=countOccurrences(arr,10,key);
    printf("Count of %d is: %d",key,count);
}

int countOccurrences(int arr[],int size,int key) {
    int cnt=0;

    for(int i=0;i<size;i++) {
        if(arr[i]==key) {
            cnt++;
        }
    }

    return cnt;
}

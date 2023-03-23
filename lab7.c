#include <stdio.h> 

 

void bubbleSort(int arr[], int n) { 

    int i; 

int j; 

int a; 

int b; 

 

    for (i = 0; i < n-1; i++) { 

 

        b =0; 

 

        for (j = 0; j < n-i-1; j++) { 

 

            if (arr[j] > arr[j+1]) { 

 

                a =arr[j]; 

                arr[j] =arr[j+1]; 

                arr[j+1] =a; 

                b++; 

 

            } 

 

        } 

 

        printf("Index:Swaps  %d:%d\n",i,b); 

 

    } 

} 

 

void main() { 

    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; 
    int num = sizeof(array) /sizeof(array[0]); 
    bubbleSort(array, num); 

} 
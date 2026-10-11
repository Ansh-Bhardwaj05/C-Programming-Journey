// Ques. Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n){            // {1,2,3,4,5,6,7}
    int temp;                              //  0 1 2 3 4 5 6  indexes 
    for (int i = 0; i < n/2; i++){         //   run the loop for n/2 for swaping only needed and swap to n-i-1 as it the index you will swap 
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
        
    }
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    printarray(arr,7);
    reverse(arr,7);
    printarray(arr,7);

    return 0;
}
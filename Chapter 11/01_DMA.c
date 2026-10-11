#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    //int arr[n]; // this is not allowed to solve this we do
    int* ptr;

    ptr = (int*) malloc(n * sizeof (int));
    ptr[0] = 54;
    ptr[1] = 34;
    ptr[2] = 61;
    printf("%d",ptr[2]); 

    return 0;
}
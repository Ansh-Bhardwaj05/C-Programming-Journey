#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    //int arr[n]; // this is not allowed to solve this we do

    ptr = (int*) malloc(n * sizeof (int));
    ptr[0] = 54;
    ptr[1] = 34;
    printf("%d\n",ptr[1]); 
    free(ptr); // after this if we will print any thing related to ptr it will return garbage value
    printf("%d", ptr[1]);

    return 0;
}
#include <stdio.h>
#include<stdlib.h>

int main(){
    int n=4;
    int* ptr;

    ptr = (int*) malloc(n * sizeof (int));
    ptr[0] = 54;
    ptr[1] = 34;
    ptr[2] = 61;
    printf("%d",ptr[2]); 

    ptr = (int*) realloc(ptr,10 * sizeof (int));
    
    return 0;
}
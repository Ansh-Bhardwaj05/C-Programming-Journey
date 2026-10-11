// Ques. Create an array of 10 numbers.Verify using pointers arithmetic that (ptr+2) points to the third element.

#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;  // arrays by default start from first element

    printf("the value at address %u is %d\n",ptr+2,*(ptr+2));
    
    return 0;
}
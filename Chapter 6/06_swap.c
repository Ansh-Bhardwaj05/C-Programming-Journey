#include <stdio.h>

void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a=5,b=9;
    swap(&a,&b);
    printf("the value of a is: %d and b is %d",a,b);

    return 0;
}
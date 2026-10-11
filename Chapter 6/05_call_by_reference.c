#include <stdio.h>

int sum(int* a, int* b){
    *a = *a + 8;
    return *a + *b;
}

int main(){
    int a,b;
    printf("a is: ");
    scanf("%d",&a);

    printf("b is: ");
    scanf("%d",&b);
    
    int* j = &a;
    int* k = &b;

    printf("the sum of a and b is %d\n",sum(&a,&b)); // we take address for changing the value in funtion
    
    printf("the value of a is %d",a);


    return 0;
}
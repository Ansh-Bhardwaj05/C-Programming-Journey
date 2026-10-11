#include <stdio.h>

int factorial(int);

int factorial(int n){
    if (n==0 || n==1){    // base condition
        return 1;
    }
    return n*factorial(n-1);
    
}

int main(){
    int a;
    printf("enter no.: ");
    scanf("%d",&a);
    printf("the factorial of no. %d is %d",a,factorial(a));
    
    return 0;
}
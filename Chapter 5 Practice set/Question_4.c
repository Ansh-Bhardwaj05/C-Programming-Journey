// Ques. Write a program recurssion to calculate the nth element of fibonacci series.//

#include <stdio.h>

int fibonacci(int n){   //sum of previous 2 numbers 
    if (n==1 || n==2){  //fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
        return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int a;
    printf("the index no. ");
    scanf("%d", &a);

    printf("the %d element of fibonacci series is %d",a,fibonacci(a));

return 0;
}
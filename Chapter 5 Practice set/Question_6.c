// Ques. Write a recursion funtion to calculate the sum of n numbers given by user.//

#include <stdio.h>

int sum_natural(int n){
    if (n==1){        // sum(n)= 1+2+3+4+5+6+7+8+9+10+-----(n-1)+ n 
        return 1;     // sum(n)= n+(n-1)
    }
    return n + sum_natural(n-1);
    }
    
int main(){
    int a;
    printf("enter the natural no. ");
    scanf("%d",&a);
    
    printf("the sum of %d natural numbers is %d",a,sum_natural(a));

    return 0;
}
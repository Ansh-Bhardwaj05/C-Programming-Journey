// Ques. write a program to find the sum of the multiplicatio table of any number entered by user.//

#include <stdio.h>

int main(){
    int n;
    int sum=0;

    printf("enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++){
        sum+=n*i;

    }
    printf("the total sum of the table %d is: %d",n,sum);

    return 0;
}


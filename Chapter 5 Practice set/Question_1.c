// Ques. Write a program using function to find average of three numbers.//

#include <stdio.h>

float average(int a,int b,int c){
    return (a+b+c)/3.0;
}

int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);

    printf("enter b: ");
    scanf("%d",&b);

    printf("enter c: ");
    scanf("%d",&c);

    printf("the average of %d,%d and %d is %f",a,b,c,average(a,b,c));

    return 0;
}
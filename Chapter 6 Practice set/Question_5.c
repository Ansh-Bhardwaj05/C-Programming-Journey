// Ques. Write a program using function which calculates the sum and average of two numbers by using pointers.//

#include <stdio.h>

int sum(int*x, int*y){
    return (*x + *y);
}
float avg(int*x, int*y){
    return (*x + *y)/2;

}

int main(){
    int a=5,b=9;
    int*i = &a;
    int*j = &b;

    printf("the sum of a and b is %d\n",sum(&a,&b));
    printf("the average of a and b is %.2f\n",avg(&a,&b));

    return 0;
}
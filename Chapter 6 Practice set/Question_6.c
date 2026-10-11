// Ques. Write a program to print the value of a variable i by using pointer to pointer type of variable.//

#include <stdio.h>

int main(){
    int i;
    printf("enter i: ");
    scanf("%d",&i);
    int*j = &i;
    int**k = &j;

    printf("the value of i is %d\n", i);
    printf("the address of i is %p\n", &i);
    printf("the value of i is %d\n", *j);
    printf("the address of j is %p\n", &j);
    printf("the value of i is %d\n", **k);
    printf("the address of k is %p\n", &k);

    return 0;
}
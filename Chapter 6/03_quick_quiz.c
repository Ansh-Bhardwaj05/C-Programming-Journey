#include <stdio.h>

int main(){
    int i;
    int*j = &i;
    printf("enter value of i: ");
    scanf("%d",&i);

    printf("the address of i is %u\n", &i);

    printf("the address of i is %u\n", j);

    printf("the address of j is %u\n", &j);

    printf("the value of i is %d\n", *(&i));

    printf("the value of i is %d\n", *j);

    printf("the value of i is %d\n", i);

    return 0;
}
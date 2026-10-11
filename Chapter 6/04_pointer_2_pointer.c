#include <stdio.h>

int main(){
    int i = 4;
    int* j = &i;
    int** k = &j;       // int** is an pointer to pointer for i in int type

    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", **k);
    printf("the address of i is %u\n", &i);
    printf("\n");
    
    printf("the value of j is %d\n", j);
    printf("the value of j is %d\n", *k);
    printf("the address of j is %u\n", &j);
printf("\n");
    printf("the value of k is %d\n", k);
    printf("the address of k is %u\n", &k);
printf("\n");
    return 0;
}
#include <stdio.h>

int main(){
    int i=77;
    int* j= &i;     // int* j is an pointer for int type
    printf("the address of i is: %p\n",&i);   //%p give hexadecimal value

    printf("the address of i is: %u\n",&i);   // %u give unsigned value

    printf("the address of i is: %d\n",j);


    return 0;
}
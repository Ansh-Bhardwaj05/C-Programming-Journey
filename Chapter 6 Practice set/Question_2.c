// Ques. Write a program having a variable 'i'. Print the address of 'i'. Pass this variable to a function and print its address.

#include <stdio.h>

int address_return(int* j){
    printf("the value of j is %d\n",j);
    printf("the value of i is %d\n", *j);
    return 0;
}

int main(){
    int i = 11;
    int*j = &i;

    printf("the address of i is %u\n",&i);
    address_return(j);
    return 0;
}
// Ques. Write a program to print the adress of a variable and use this address to get the value of the variable.//

#include <stdio.h>

int main(){
    int i = 6;
    int*j = &i;

    printf("the address of i is %u\n",&i);
    printf("the value of i is %u\n",*j);
    
    return 0;
}
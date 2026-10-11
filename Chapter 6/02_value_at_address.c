#include <stdio.h>

int main(){
    int i=54;
    int* j= &i;

    printf("the value of i is %d\n", *(&i));  // * give value at address of variable  

    printf("the value of i is %d\n", *j);  

    return 0;
}
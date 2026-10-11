#include <stdio.h>

int main(){
    int a = 84;
    float b = 6.65;
    int c = 9;

    printf("The value is %f\n", a*b/c + 7);
    printf("The value is %f", 3*b/2*c + 7*a);
    // first we prefer /,* and then the others and start from left to right

    return 0;
}
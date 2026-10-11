#include <stdio.h>

int main()
{
    int i = 90; // Declare and initialize 'i' with 10
    int j = 2*i;
    int a = 25, b = 3*j, c = 44, d = 5*c;
    
    // %d is for int, %f is for float and %c is for char
    
    printf("The value of i is %d and value of j is %d\n", i, j );
    
    printf("The value of a is %d and value of b is %d\n", a, b );
    
    printf("The value of c is %d and value of d is %d\n", c, d );
    return 0;
}
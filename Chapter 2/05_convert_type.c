#include <stdio.h>

int main(){
    int n = 100;
    float m = 99.99;

    n = (int) m; // convert the data type to int
    // does not prefer round off system 
    printf("%d\n", n);
    return 0;
}
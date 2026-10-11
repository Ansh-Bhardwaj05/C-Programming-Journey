#include <stdio.h>
#include <math.h>


int main(){
    int a;
    printf("enter value of square side: \n");
    scanf("%d",&a);
    printf("the area of square of side %d is %.2f",a,pow(a,2));

    return 0;
}
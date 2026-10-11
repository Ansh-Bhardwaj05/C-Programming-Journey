// Ques. Write a program to find the greatest number out of four numbers entered by user.//

#include <stdio.h>

int main(){
    float a,b,c,d;
    printf("the no first is: ");
    scanf("%f", &a);

    printf("the no second is: ");
    scanf("%f", &b);

    printf("the no third is: ");
    scanf("%f", &c);

    printf("the no fourth is: ");
    scanf("%f", &d);

    if (a>b && a>c && a>d)
    {
        printf("the greatest no is %f", a);
    }
    if (b>a && b>c && b>d)
    {
        printf("the greatest no is %f", b);
    }
    if (c>b && c>a && c>d)
    {
        printf("the greatest no is %f", c);
    }
    if (d>b && d>c && d>a)
    {
        printf("the greatest no is %f", d);
    }

    return 0;
}
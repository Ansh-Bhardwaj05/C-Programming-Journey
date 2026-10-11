// Ques. Create an array of 5 complex numbers created in problem 5 and display them with the help of display funtion.//

#include <stdio.h>

typedef struct complexnumber
{
    int a;
    int b;
}cn;

void display(cn t){
    printf("the complex number is %d + i%d\n",t.a,t.b);
}

int main(){
    cn c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter real value: ");
        scanf("%d",&c[i].a);

        printf("enter imagenary value: ");
        scanf("%d",&c[i].b);

        display(c[i]);
    }
    
    return 0;
}
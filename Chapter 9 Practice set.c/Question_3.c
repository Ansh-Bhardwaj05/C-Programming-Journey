// Ques. Write a complex number using structures in c.//

#include <stdio.h>

typedef struct complexnumber
{
    int a;
    int b;
}cn;

int main(){
    cn c ={7,91};
    printf("the complex number is %d + i%d",c.a,c.b);
    
    return 0;
}
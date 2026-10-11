#include <stdio.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct emp e1;
    struct emp *ptr;
    ptr = &e1; //  or struct emp *ptr = &e1;
    e1.code = 54;

    //printf("%d", (*ptr).code);
         // or
    printf("%d", ptr->code);
    return 0;
}
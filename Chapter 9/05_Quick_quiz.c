#include <stdio.h>
#include<string.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

void display(struct emp e1){
    printf("%d %f %s",e1.code,e1.salary,e1.name);
}

int main(){
    struct emp e1;
    e1.code = 312;
    e1.salary = 35445.45;
    strcpy(e1.name,"Ansh Bhardwaj");

    display(e1);
    
    return 0;
}
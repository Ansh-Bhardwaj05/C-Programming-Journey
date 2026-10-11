#include <stdio.h>
#include<string.h>
// structures are used for storing disimiliar data

struct employee
{
    int code;
    float salary;
    char name[20];
}; //semicolumn is important

int main(){
   /* struct employee e1;
    e1.code = 312;
    e1.salary = 35445.45;
    strcpy(e1.name,"Ansh Bhardwaj");*/
         // or
    struct employee e1={234,5456.55,"Ansh Bhardwaj"};
    
    printf("%d %.2f %s",e1.code,e1.salary,e1.name);
    
    return 0;
}
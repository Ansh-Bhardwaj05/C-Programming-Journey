#include <stdio.h>
#include<string.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct emp fb[5];
    fb[0].code = 154;
    fb[1].code = 54654;
    fb[0].salary = 456455.63;
    fb[1].salary = 531563.32;
    strcpy(fb[0].name,"ansh bhardwaj");
    strcpy(fb[1].name,"deenu bhardwaj");
    
    printf("the %d %f %s is of facebook 1\n",fb[0].code,fb[0].salary,fb[0].name);
    printf("the %d %f %s is of facebook 2\n",fb[1].code,fb[1].salary,fb[1].name);
    return 0;
}
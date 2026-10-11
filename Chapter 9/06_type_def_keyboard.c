#include <stdio.h>
#include <string.h>

typedef struct employee                    /*typedef int hello;
                                                hello a = 10 // hello will act as int*/
{
    int code;
    float salary;
    char name[20];
};    
// now due to use of typedef we can give an new short name struct employee

    typedef struct employee E; // can be identified as this also
int main()
{
    E e1;

    printf("the code of emp e1 is: ");
    scanf("%d", &e1.code);

    printf("the salary of emp e1 is: ");
    scanf("%f", &e1.salary);

    printf("the name of emp e1 is: ");
    scanf("%s", &e1.name);

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);

    return 0;
}
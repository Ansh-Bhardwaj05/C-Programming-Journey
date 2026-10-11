#include <stdio.h>
#include <string.h>

struct emp
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct emp e1, e2, e3;

    printf("the code of emp e1 is: ");
    scanf("%d", &e1.code);

    printf("the salary of emp e1 is: ");
    scanf("%f", &e1.salary);

    printf("the name of emp e1 is: ");
    scanf("%s", &e1.name);

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);

    printf("the code of emp e2 is: ");
    scanf("%d", &e2.code);

    printf("the salary of emp e2 is: ");
    scanf("%f", &e2.salary);

    printf("the name of emp e2 is: ");
    scanf("%s", &e2.name);

    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);

    printf("the code of emp e3 is: ");
    scanf("%d", &e3.code);

    printf("the code of emp e3 is: ");
    scanf("%f", &e3.salary);

    printf("the code of emp e3 is: ");
    scanf("%s", &e3.name);

    printf("%d %.2f %s\n", e3.code, e3.salary, e3.name);

    return 0;
}
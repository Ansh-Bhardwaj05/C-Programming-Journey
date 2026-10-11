#include <stdio.h>

int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if (age > 18)
    {
        printf("you are eligible for license\n");
    }
    else
    {
        printf("you should wait for %d years", 18 - age);
    }
    return 0; /* code */
}

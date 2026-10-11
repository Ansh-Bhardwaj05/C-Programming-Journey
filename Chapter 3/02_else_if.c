#include <stdio.h>

int main()
{
    int age = 65;

    if(age > 60)
    {
        printf("you can drive and you are an senior citizen");
    }
    else if (age >= 35)
    {
        printf("you can drive and you are an adult");
    }
    else if (age >=18)
    {
        printf("you can drive and drive following rules you have a long life ahead");
    }
    else
    {
        printf("you are under 18, you cannot drive");
    }
    
    return 0;
}
     
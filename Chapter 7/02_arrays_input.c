#include <stdio.h>

int main(){
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("the marks of index %d are ",i);
        scanf("%d",&marks[i]);
    }

    return 0;
}
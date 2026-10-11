#include <stdio.h>

int main(){
    int marks[]={43,65,78,91,15};
    //int* ptr= &marks[0];
          //or          means same objective 
    int* ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("the marks at index %d is %d\n",i,marks[i]);
        printf("the marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}
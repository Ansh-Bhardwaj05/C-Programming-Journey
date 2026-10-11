#include <stdio.h>

int main(){
                  // int marks[]= {98,54,23,45,76,23};
    //can be written in any way
    int marks[6]= {98,54,23,45,76,23};
  for (int i = 0; i < 6; i++)
    {
        printf("the marks at index %d is %d\n",i,marks[i]);
    }
    
    return 0;
}
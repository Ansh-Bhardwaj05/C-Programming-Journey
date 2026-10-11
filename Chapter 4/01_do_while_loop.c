#include <stdio.h>

int main(){
    int i=1;
    do  //the loop will be executed first and then the condition is checked
    {
        printf("the value of i is %d\n",i);
        i++;

    } while (i<10);
    
    return 0;
}
// Ques. write an code to tell the area of a rectangle //

#include <stdio.h>

int main(){
    int length, breadth;
    printf("enter length\n");
    scanf("%d", &length);
    
    printf("enter breadth\n");
    scanf("%d", &breadth);

    printf("the are of rectangle is: %d", length*breadth);
    return 0;
}
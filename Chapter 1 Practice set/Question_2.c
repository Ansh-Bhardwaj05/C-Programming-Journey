// Ques. write an code to tell the area of a circle and modify the same program to calculate the vol. of cylinder.//

#include <stdio.h>

int main(){
    int r = 11;
    printf("the area of circle of radius %d is %f\n", r, 3.14*r*r);
    int h=18;
    printf("the volume of cylinder of radius %d and height %d is %f", r, h, 3.14*r*r*h);

    return 0;
}
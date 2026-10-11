// Ques. write a program to calculate the interest for a seat of values representing principal,no. of years and ROI.//

#include <stdio.h>

int main(){
    float p=10000.0,r=9.8,t=8.0,s;
    printf("the principal is: %f\n the rate of interest is: %f\n the time period is: %f\n",p,r,t);
    s= (p*r*t/100.0);
    printf("the simple interest is: %f",s);

    return 0;
} 
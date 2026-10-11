// Ques. Write an program to determine whether an year entered by user is leap year or not.//

#include <stdio.h>

int main(){
    int year;
    printf("enter year: ");
    scanf("%d",&year);

    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("this year is an leap year");

    }
    else{
        printf("this is not an leap year");
        
    }
    return 0;
}
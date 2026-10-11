// Ques. write a program to sum first 10 natural numbers.//

#include <stdio.h>

int main(){
    int i=1;
    int sum = 0;

    while (i<=10)
    {
        sum+=i;
        i++;

    }
    printf("the total sum of the numbers is: %d", sum);


    return 0;
}
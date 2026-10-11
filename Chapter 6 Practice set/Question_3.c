// Ques. Write a program to change the value of a variable to ten times of ots current value.//

#include <stdio.h>

void change_ten_times(int* a){
    *a = *a * 10;
}

int main(){
    int i;
    int*j = &i;
    printf("enter i: ");
    scanf("%d",&i);
    
    change_ten_times(&i);
    printf("the ten times value of i is %d\n", i);

 return 0;
}
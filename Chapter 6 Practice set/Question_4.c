// Ques. Write a functionand pass the value by reference.//

#include <stdio.h>

int change(int* a){
    *a = *a * 7;
}

int main(){
    int i = 7;
    int*j = &i;
    change(&i);

    printf("the value of i now is %d",i);

    return 0;
}
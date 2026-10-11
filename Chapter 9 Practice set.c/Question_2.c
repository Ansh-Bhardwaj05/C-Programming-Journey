// Ques. Write a function sum vector which returns the sum of two vectors passed to it.//

#include <stdio.h>

typedef struct vector{
    int i;
    int j;
}vector;

vector sumvector(vector v1, vector v2){
    
    vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    vector v1,v2;
    v1.i = 23;
    v1.j = 69;
    v2.i = 28;
    v2.j = 54;

    vector v3 = sumvector(v1,v2);


    printf("the sum vector v3 is %di + %dj ",v3.i,v3.j);

    return 0;
}
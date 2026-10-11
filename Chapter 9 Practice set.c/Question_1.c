// Ques. Create an two-dimensional vector using structures in c.//

#include <stdio.h>

typedef struct vector{
    int x;
    int y;
}vector;

int main(){
    vector v;
    v.x = 23;
    v.y = 69;

    printf("the two dimentional vector is %di + %dj ",v.x,v.y);
    
    return 0;
}
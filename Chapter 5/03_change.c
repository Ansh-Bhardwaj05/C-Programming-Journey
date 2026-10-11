#include <stdio.h>

int change(int);

int change(int a){
    a=71;
    printf("a is %d\n",a);

}
int main(){
    int b= 69;
    change(b);  //b doesn't change just its copy go
    printf("the value of b is %d\n",b);

    return 0;
}
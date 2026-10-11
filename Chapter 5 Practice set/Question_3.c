// Ques. write a funtion to calculate force of attraction on a body.// 

#include <stdio.h>

float force(int mass){
    return mass*9.8;

}
int main(){
    int m;
    printf("enter mass: ");
    scanf("%d",&m);

    printf("the force exerted by the body of mass %d is %.2f",m,force(m));

    return 0;
}
#include <stdio.h>

int sum(int,int); //funtion prototype (this is not important to write just for show)
        

//funtion defination
int sum(int x,int y){
   // printf("the sum is: %d\n",x+y);
    return x+y;   //save the value 
}


int main(){
    int a,b;
    //int c=a+b;
    //printf("the value of c is: %d\n",c);

   int c= sum(a=10,b=56);
   printf("%d\n",c);

    int a1=37,b1=95;
    //int c1=a1+b1;
    //printf("the value of c1 is: %d\n",c1);

    int c1 =sum(a1,b1);//funtion call
    printf("%d\n",c1);
    int a2=35,b2=25;
    //int c2=a2+b2;
    //printf("the value of c2 is: %d\n",c2);
    
    int c2=sum(a2,b2);//funtion call
    printf("%d\n",c2);
    return 0;
}
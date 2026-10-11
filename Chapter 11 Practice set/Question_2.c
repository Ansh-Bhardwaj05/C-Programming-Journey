#include <stdio.h>
#include<stdlib.h>

int main(){
   int n=6;
   int* ptr;
   
   ptr = (int*) malloc(n * sizeof(int));
   for (int i = 0; i < 6; i++)
   {
    scanf("%d\n", &ptr[i]);
   }
   
   for (int i = 0; i < 6; i++)
   {
    printf("the value %d integer is %d\n",i+1,ptr[i]);
   }
   
   
   return 0;
}
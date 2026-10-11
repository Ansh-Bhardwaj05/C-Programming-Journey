// Ques. Create an array of multiplication table of 7 upto 10. Use realloc to make it store till 15.

#include <stdio.h>
#include<stdlib.h>

int main(){
   int n = 10;
   int *ptr;
   
   ptr = (int*) malloc(n* sizeof(int));
   for (int i = 0; i < n; i++)
   {
    ptr[i] = 7 * (i+1); 
   }
   printf("the array is\n");

   for (int i = 0; i < n; i++)
   {
    printf("7 X %d = %d\n",i+1,ptr[i]);
   }
   n = 15;

   ptr = (int*) realloc(ptr, 15 * sizeof(int));
   for (int i = 0; i < n; i++)
   {
    ptr[i] = 7 * (i+1);
   }
   printf("the array is\n");
   for (int i = 0; i < n; i++)
   {
    printf("7 X %d = %d\n",i+1,ptr[i]);   
   }

   return 0;
}
// Ques. Write a program to generate multiplication table of a given number in text format.//

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("table.txt","w");
    int num;
    printf("enter the number whose table you want: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d\n",num*i);
    }
    
    return 0;
}
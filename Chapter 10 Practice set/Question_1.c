// Ques. Write a program to read three integers in a file.//

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("anshbhardwaj.txt","r");
    int num1,num2,num3;
    fscanf(ptr,"%d",&num1);
    printf("the first number is %d\n",num1);

    fscanf(ptr,"%d",&num2);
    printf("the second number is %d\n",num2);

    fscanf(ptr,"%d",&num3);
    printf("the third number is %d\n",num3);
    fclose(ptr);
    
    return 0;
}
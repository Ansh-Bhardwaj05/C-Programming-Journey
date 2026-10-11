#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh1.txt","r");

    if (ptr == NULL) // NULL used to see if the file exists or not
    {
        printf("the file does n't exists");
    }
    else{
        printf("the file exists");
    }
    
    return 0;
}
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh.txt","r");
    char c = fgetc(ptr); // fgetc is used to read the character in the file 
    printf("%c",c);

    return 0;
}
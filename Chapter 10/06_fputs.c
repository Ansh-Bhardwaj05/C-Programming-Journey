#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh.txt","a");
    
    fputc('H',ptr); // fputc is used to add an ch in a file  

    return 0;
}
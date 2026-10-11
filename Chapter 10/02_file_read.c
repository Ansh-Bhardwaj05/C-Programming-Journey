#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh.txt","r"); // to use r mode the selected file should already exist
    
    int num;
    fscanf(ptr,"%d",&num);
    printf("the number present in file is %d",num);
    fclose(ptr); // used to close the file 

    return 0;
}
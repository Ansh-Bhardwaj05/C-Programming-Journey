#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh.txt","w"); // append mode (a) is also used as write but it does not overwrite the data

    int num = 1321;
    fprintf(ptr,"%d",num);
    fclose(ptr);

    FILE *ptr1;
    ptr1 = fopen("ansh.txt","r");
    fscanf(ptr,"%d",&num);
    printf("%d",num);
    fclose(ptr1);

    return 0;
}
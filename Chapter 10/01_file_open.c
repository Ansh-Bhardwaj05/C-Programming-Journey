#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("ansh.txt","w"); // w is used to wrute  and create an text file but if an file exists
                                //  and w is used to add data then the previous data is overwritten   

    return 0;
}
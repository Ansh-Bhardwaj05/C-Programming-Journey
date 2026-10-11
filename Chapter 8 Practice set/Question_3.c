// Ques. Write a fuction slice() to slice a string.It should change the string such that 
//it now the sliced string take m and n start and end position for slice.//

#include <stdio.h>

char* slice(char st[],int m , int n){

    char* ptr1 = &st[m];
    char* ptr2 = &st[n];

    st = ptr1;
    st[n] = '\0';
    return st;

}


int main(){
    char str[]="ansh bhardwaj from peeragarhi";
    printf("%s",slice(str,4,20));

    return 0;
}
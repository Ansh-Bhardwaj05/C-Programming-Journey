// Ques. Write a program to check whether a given character is present or not.//

#include <stdio.h>
#include <string.h>


int main(){
    int contains=0;
    char a[]="nbdfngjfngjngdfnnfdnfjdfdnjsdfnjdghhgbjvnjkdngflgufyg";
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]=='b')
        {
            contains=1;
            break;
        }
    }
    if (contains)
    {
        printf("the character is present");
    }
    
    else{
    printf("the character is not present");
    }
    
    return 0;
}
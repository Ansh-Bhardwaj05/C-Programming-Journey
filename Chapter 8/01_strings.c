#include <stdio.h>

int main(){
    char st[]= {'a','n','s','h','\0'};
           //or means same 
    char str[]= "ansh"; // in this null character is included

    for (int i = 0; i < 5; i++)
    {
        printf("the character is %c\n",st[i]);
        printf("the character is %c\n",str[i]);
    }
    
    return 0;
}
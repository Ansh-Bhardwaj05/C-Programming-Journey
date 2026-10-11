// Ques. Write a code to take as an input from the user %c and %s confirm that the strings are equal.//

#include <stdio.h>

int main(){
    char str[5];
    for (int i = 0; i < 4; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin);  // will not count enter as an char

    }

    str[4]='\0';
    printf("%s",str);
    
    return 0;
}
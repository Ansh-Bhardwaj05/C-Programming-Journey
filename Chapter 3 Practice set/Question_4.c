// Ques. Write an program to determine whether an character entered by user is lowercase or not.//

#include <stdio.h>

int main(){
    char ch;
    printf("enter the character: ");
    scanf("%c", &ch);
    printf("the value of character is %d\n", ch);

    if (ch>=97 && ch<=122)
    {
        printf("the character is lowercase");
    }
    else{
        printf("the character is not lowercase");
        
    }
    return 0;
}
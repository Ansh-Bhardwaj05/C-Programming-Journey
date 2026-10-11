// Ques. Writs a program to encrypt a string by adding 1 to ASCII value of its characters.//

#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Ansh Bhardwaj is a honest person";
    
    for (int i = 0; i < strlen(str); i++){ 
        str[i] = str[i] + 1;
    }
    printf("%s",str);
    
    return 0;
}
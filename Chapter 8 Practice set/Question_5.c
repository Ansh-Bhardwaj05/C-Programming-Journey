// Ques. Write an ASCII format in an simple text.//

#include <stdio.h>
#include <string.h>

int main(){
    char str[]="Boti!Cibsexbk!jt!b!ipoftu!qfstpo";
    
    for (int i = 0; i < strlen(str); i++){ 
        str[i] = str[i] - 1;
    }
    printf("%s",str);
    
    return 0;
}
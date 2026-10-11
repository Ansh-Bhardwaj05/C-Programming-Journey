// Ques. Write an code for strlen().//

#include <stdio.h>

int strlen(char st[]){
    int i=0,counts;
    char c = st[i];

    while (c!='\0')
    {
        c= st[i];
        i++;
    }
    counts = i-1;
    return counts;
   
}

int main(){
    char str[]="Ansh Bhardwaj from peeragarhi";
    printf("%d",strlen(str));
    return 0;
}
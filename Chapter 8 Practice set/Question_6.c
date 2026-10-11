// Ques. Write a program to calculate an occurence of an given character by user.//

#include <stdio.h>
#include <string.h>

int main(){
    int occured_times=0;
    char str[]="Boti!Cibsexbk!jt!b!ipoftu!qfstpo";
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]=='o')
        {
            occured_times++;
        }
   
    }
    printf("the character occured %d time ",occured_times);

    
    return 0;
}
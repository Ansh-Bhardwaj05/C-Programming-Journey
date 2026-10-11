#include <stdio.h>
#include <string.h>  // used to use string specific funtions

int main(){
    
    // 1) strlen()
    char str[]="Ansh bhardwaj ";
    printf("%d\n",strlen(str)); 
    
    // 2) strcpy(s1,s2)--s2 will be copied in s1
    char st[20];
    strcpy(st,str);
    printf("%s\n",st);

    // 3) strcat(s1,s2)--will join s1 and s2
    strcat(str,st);
    printf("%s",str);

    // 4) strcmp(s1,s2)--- will give 0 is equal and -ve if s1 comes first or +ve if s2 comes first
    int a = strcmp("ansh","pandat");
    printf("%d",a);


    return 0;
}
// Ques. write a program to print a patter like *  for n lines given by user
//                                              ***
//                                              *****

#include <stdio.h>

int main(){
    int n;
    printf("lines you want ");                            // i=1 ------1 star   
    scanf("%d",&n);                                       // i=2 ------3 star
                                                          // i=3 ------5 star  
    for (int i = 1; i <=n; i++){                          //i=? ------- 2*i-1
        for (int j = 1; j <= 2*i-1; j++){  
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}
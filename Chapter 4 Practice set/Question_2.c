// Ques. write multiplication table of a number in reverse order given by user.//

#include <stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 10; i >0; i--)
    {           
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
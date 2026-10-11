// Ques. solve question 6 using while loop.//

#include <stdio.h>

int main(){
    int n;
    int i=1;
    int product=1;

    printf("enter the number: ");
    scanf("%d",&n);

                                                          /* while (i<=n)
                                                           {
                                                            product*=i;
                                                           i++;
                                    
                                                            }*/
     do{
        product*=i;
        i++;
     } while (i<=n);
                                                           
    printf("the factotrial of %d is %d",n,product);
     return 0;
     }
// Ques. find sum of 10 natural numbers using do-while and for loop.//

#include <stdio.h>

int main(){
    int sum = 0;
    int i=1;

                                                   /*for (int i = 1; i <= 10; i++)
                                                   {
                                                       sum+=i;
                                                   }*/
     do{

        sum+=i;
        i++;
       
        } while (i<=10);
     
    
    printf("the total sum of the numbers is: %d", sum);


    return 0;
}
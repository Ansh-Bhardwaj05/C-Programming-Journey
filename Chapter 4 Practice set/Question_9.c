// Ques. solve question 8 by using other types of loops.//

#include <stdio.h>

int main()
{
    int n;
    int i=2;
    printf("enter number: ");
    scanf("%d", &n);
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        do{
            if (n%i==0 && n!=2)
            {
                not_prime=1;
                break;
            }
            i++;

        } while (i<n);
    }    
        
                                                                    /* while(i < n)
                                                                    {
                                                                        if (n % i == 0)
                                                                        {
                                                                            not_prime = 1;
                                                                            break;
                                                                        }
                                                                        i++;
                                                                    }*/
        if (not_prime)
        {
            printf("%d is not an prime number", n);
        }
        else
        {
            printf("%d is an prime number", n);
        }
    

    return 0;
}
// Ques. Write a program to check whether a given number is prime or not.//

#include <stdio.h>

int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int not_prime = 0;

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
        }
    }    
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
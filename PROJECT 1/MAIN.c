/*We will write a program that generates a random number and asks the player to guess it. If the player’s guess is higher than 
the actual number, the program displays “Lower number please”. Similarly, if the user’s guess is too low, the program 
prints “Higher number please”.When the user guesses the correct number, the program displays the number of guesses 
the player used to arrive at the number.
{Hint: Use loop & use a random number generator.}*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); /* initialize random number generator*/

    int random_number = (rand() % 100) + 1;
    int guessed_number;
    int number_of_guesses = 0;

    do{
        printf("guess the number: ");
        scanf("%d", &guessed_number);

        if (guessed_number > random_number)
        {
            printf("lower number please\n");
        }

        else if (guessed_number < random_number)
        {
            printf("higher number please\n");
        }

        else
        {
            printf("congrats!\n");
        }

        number_of_guesses++;
         
    } while (guessed_number != random_number);

    printf("you guessed number in %d times", number_of_guesses);

    return 0;
}
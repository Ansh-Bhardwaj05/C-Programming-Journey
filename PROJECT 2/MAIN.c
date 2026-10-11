/*Snake, water, gun or rock, paper, scissors is a game most of us have played during school time. (I sometimes play it even now).

Write a C program capable of playing this game with you.

Your program should be able to print the result after you choose snake/water or gun.*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int player,computer = rand() % 3; // means take random value from 0 to 2 excluding 3
    // snake---> 0
    // water---> 1
    // gun-----> 2

    printf("Choose 0 for Snake, 1 for Water and 2 for Gun: ");
    scanf("%d",&player);

    printf("Computer choose %d\n",computer);

    if (player == 0 && computer == 0)
    {
        printf("It is a Draw\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Won!");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It is a Draw\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Won!");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Won!");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It is a Draw\n");
    }
    
     return 0;
}
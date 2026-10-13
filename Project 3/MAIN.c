//                            CALCULATOR IN C LANGUAGE                                       //

#include <stdio.h>

int main()
{
    int num1, num2, choice;
    printf("-------------welcome to the calculator----------------\n");

    while (1)
    {
        printf("\n-------------Calculator Menu---------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5.Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5)
        {
            printf("Enter First Number\n");
            scanf("%d", &num1);

            printf("Enter Second Number\n");
            scanf("%d", &num2);
        }
        if (choice == 6)
        {
            return 0;
        }

        switch(choice)
        {
        case 1:
            printf("Result:  %d", num1 + num2);
            break;

        case 2:
            printf("Result:  %d", num1 - num2);
            break;

        case 3:
            printf("Result:  %d", num1 * num2);
            break;

        case 4:
            if (num2 != 0)
            {
                printf("Result:  %d", num1 / num2);
            }
            else
            {
                printf("Denominator cannot be zero\n");
            }
            break;

        case 5:
            if (num2 != 0)
            {
                printf("Result:  %d", num1 % num2);
            }
            else
            {
                printf("Denominator cannot be zero\n");
            }
        break;

        default:
        printf("Invalid Choice\n");
        break;
        
        }
    }
    printf("THANKS FOR USING THIS CALCULATOR\n");
    return 0;
}


// Ques. Write a program to read a text file character by character and write its content in seperate file.//

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("anshbhardwaj.txt", "r");
    ptr2 = fopen("twice.txt", "a");

    char ch;
    
    while (1)
    {
        ch = fgetc(ptr1);
        if (ch = EOF)
        {
            break;
        }
        else
        {
            fputc(ch,ptr2);
            fputc(ch,ptr2);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    printf("the file content was copied twice successfully\n");

    return 0;
}
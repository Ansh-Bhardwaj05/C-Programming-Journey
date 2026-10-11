// Ques. write a program to determine whether a student has passed or failed.To pass a student requires a total of
// 40% and 33% in each subject.Assume there are three subjects and take the marks as input from user.//

#include <stdio.h>

int main()
{
    int m1, m2, m3;
    printf("enter marks1\n");
    scanf("%d", &m1);

    printf("enter marks2\n");
    scanf("%d", &m2);

    printf("enter marks3\n");
    scanf("%d", &m3);
    printf("the marks are %d,%d and %d\n", m1, m2, m3);

    if (m1 < 33 || m2 < 33 || m3 < 33)
    {
        printf("you failed in an individual subject\n");
    }
    else if (((m1 + m2 + m3) / 3) < 40)
    {
        printf("your failed due to less percentage");
    }
    else
    {
        printf("you passed");
    }

    return 0;
}
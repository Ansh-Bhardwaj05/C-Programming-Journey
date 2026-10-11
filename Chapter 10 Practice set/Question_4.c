// Ques. Take name and employee id from user and write them in text file like; name1, 5643
//                                                                             name2, 5567

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("anshbhardwaj.txt","a");
    char name1[30],name2[30];
    int salary1,salary2;

    printf("the name of employee first is: ");
    scanf("%s",&name1);
    printf("the name of employee second is: ");
    scanf("%s",&name2);
    printf("the salary of employee first is: ");
    scanf("%d",&salary1);
    printf("the salary of employee second is: ");
    scanf("%d",&salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary2);
    fprintf(ptr,"%c",'\n');

    return 0;
}
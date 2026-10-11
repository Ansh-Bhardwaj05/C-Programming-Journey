// Ques. create an array of size 3 X 10 containing multiplication tables of n1, n2, n3.//

#include <stdio.h>

int main(){
    int arr[3][10],n1,n2,n3;
    printf("the value of n1 is: ");
    scanf("%d",&n1);
    printf("the value of n2 is: ");
    scanf("%d",&n2);
    printf("the value of n3 is: ");
    scanf("%d",&n3);
    int mul[]={n1,n2,n3};

    for (int i = 0; i <3; i++){
        for (int j = 0; j <10; j++){
            arr[i][j]= mul[i] * (j+1);
        }
    }
    
    for (int i = 0; i <3; i++){
        for (int j = 0; j <10; j++){
            printf("%d X %d = %d\n",mul[i],j+1,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
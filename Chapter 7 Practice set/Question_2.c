// Ques. Write a program to create an array of 10 intezers and store multiplication table of n numbers in it.

#include <stdio.h>

int main(){
    int arr[10],n;
    printf("the no. whose multiplication you want: ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++){
        arr[i]= n*i;
    }

for (int i = 1; i <= 10; i++){
    printf("%d X %d = %d\n",n,i,arr[i]);

}
    return 0;
}
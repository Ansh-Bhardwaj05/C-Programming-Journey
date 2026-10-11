// Ques. Program to count +ve numbers in an array.

#include <stdio.h>

int main(){
    int arr[]= {1,2,3,4,5,-4,8,-9,34};
    int positive_no = 0;

    for (int i = 0; i < 9; i++){
        if (arr[i]>=0)
        {
            positive_no++;
        }
        
    }
    printf("the total positive numbers are %d",positive_no);
    
    return 0;
}
#include <stdio.h>
#include<stdlib.h>

int main(){
    float n=5;
    float* ptr;

    ptr = (float*) malloc(n * sizeof (float));
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &ptr[i]);
    }
    printf("the float value is %.2f\n",ptr[0]);
    printf("the float value is %.2f\n",ptr[1]);
    printf("the float value is %.2f\n",ptr[2]);
    printf("the float value is %.2f\n",ptr[3]);
    printf("the float value is %.2f\n",ptr[4]);

    return 0;
}
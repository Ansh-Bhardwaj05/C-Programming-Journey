// Ques. Write a function to convert celcius temprature into fahrenheit.//

#include <stdio.h>

float temprature(int c){
    return ((9.0/5.0)*c)+32;

}
int main(){
    float c;
    printf("enter temp in celcius: ");
    scanf("%f",&c);

    printf("the temprature in fahrenhrit is %f",temprature(c));

    return 0;
}
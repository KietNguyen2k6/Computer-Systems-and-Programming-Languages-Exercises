#include<stdio.h>

float celcius_to_F(float x){
    float f = (x*9/5) + 32;
    return f;
}

int main(){
    float c;
    printf("Insert Celsius degree: ");
    scanf("%f", &c);
    printf("Fahrenheit: %.2f", celcius_to_F(c));
}
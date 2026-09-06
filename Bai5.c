#include<stdio.h>
#define TAX 0.08
int main(){
    float price;
    printf("Insert price: ");
    scanf("%f", &price);

    float tax = TAX * price;
    printf("Tax: %.2f", tax);
}
#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float average = ((float)a + b + c)/ 3;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f", average);
}
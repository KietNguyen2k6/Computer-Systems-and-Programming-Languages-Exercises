#include<stdio.h>

int main(){
    int a, b;
    double c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    printf("%d %d %.2lf %.2lf", a, b, c, d);
}
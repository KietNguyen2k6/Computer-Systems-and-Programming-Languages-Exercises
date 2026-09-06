#include <stdio.h>
#define PI 3.14

float circle_area(float r){
    return PI * r * r;
}

float circle_circumference(float r){
    return 2 * PI * r;
}

int main(){
    float r;
    printf("Insert radius: ");
    scanf("%f", &r);   
    float area = circle_area(r);
    float d = circle_circumference(r);

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f", d);
}
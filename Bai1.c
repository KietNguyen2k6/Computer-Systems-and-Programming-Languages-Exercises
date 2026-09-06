#include <stdio.h>

int main(){
    char name[50];
    int namsinh;
    printf("ten cua ban: ");
    scanf("%s", &name);
    printf("Nam sinh cua ban: ");
    scanf("%d", &namsinh);

    int tuoi = 2026-namsinh;
    printf("Hello %s, you are turning %d this year", name, tuoi);
    return 0;
}
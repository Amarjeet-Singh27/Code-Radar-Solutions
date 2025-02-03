#include <stdio.h>
int main (){
    float num;
    float area;
    scanf("%f", &num);
    area = 3.14 * num * num;
    printf("Area: %.2f",area);
    return 0;
}
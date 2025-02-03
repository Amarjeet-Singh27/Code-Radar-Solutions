#include <stdio.h>


int main() {
    int num1, num2, num3, sum;
    float av;
    scanf("%d %d %d",&num1, &num2, &num3);
    sum = num1+num2+num3;
    av = sum/3;
    printf("Average: %.2f", av);
    return 0;
}
#include<stdio.h>
int main () {
    int n1;
    scanf("%d", &n1);
    if (n1 % 2 == 0){
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}
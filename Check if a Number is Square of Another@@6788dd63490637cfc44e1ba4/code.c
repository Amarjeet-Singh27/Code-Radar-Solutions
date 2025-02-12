#include<stdio.h>

int main() {
    int n1, n2, n3;
    scanf("%d %d", &n1, &n2);
    n3 = n2 *  n2;
    if (n1 == n3){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
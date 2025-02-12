#include<stdio.h>
int main() {
    int n1;
    scanf("%d", &n1);
    if((n1 >= 1) && (100 >= n1)){
        printf("In Range");
    }
    else {
        printf("Out of Range");
    }
}
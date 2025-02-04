#include <stdio.h>

int main() {
    int n1, result;
    scanf("%d",&n1);
    result = n1&1;
    if (result == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}
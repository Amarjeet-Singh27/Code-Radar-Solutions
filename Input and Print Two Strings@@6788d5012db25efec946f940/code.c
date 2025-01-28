#include <stdio.h>
int main(){
    int x[200];
    fgets(x, sizeof(x), stdin);
    printf("You entered: %s",x);
    return 0;
}
#include <stdio.h>
int main(){
    char x[200];
    fgets(x, sizeof(x), stdin);
    printf("You entered: %s",x);
    return 0;
}
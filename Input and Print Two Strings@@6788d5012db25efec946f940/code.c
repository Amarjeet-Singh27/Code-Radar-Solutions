#include <stdio.h>
int main(){
    int x[200];
    fgets("%s", &x);
    printf("You entered: %s",x);
    return 0;
}
// Your code here...
#include<stdio.h>
int main(){
    int i, n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        printf("%d X %d = %d", n, i, n*i);
    }
    return 0;
}

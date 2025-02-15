#include<stdio.h>
int main (){
    int n1, i;
    scanf("%d", &n1);
    if((n1 == 0)||(n1 == 1)){
        printf("Not Prime");
    }
    for (i = 2; i < n1/2; i++){
        if(n1 % i ==  0){
            printf("Not Prime");
            break;
        }
        else {
            printf("Prime");
        }
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n1;
    scanf("%d",&n1);
    if((n1 % 5 = 0) && (n1 % 3 = 0)){
        printf("Divisible by Both");
    }
    else if(n1 % 3 = 0){
        printf("Divisble by 3");
    }
    else if(n1 % 5 = 0){
        printf("Divisble by 5");
    }
    else {
        printf("Not Divisble");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n1, n2, n3;
    scanf("%d %d %d")
    if (n1 == n2 == n3){
        printf("Equillateral");
    }
    else if ((n1 == n2)||(n2 == n3)){
        print("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
    }
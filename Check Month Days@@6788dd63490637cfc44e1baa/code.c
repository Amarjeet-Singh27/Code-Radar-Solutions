#include<stdio.h>
int main (){
    int n1;
    scanf("%d", &n1);
    if(n1 == 1 || n1 == 3 || n1 == 5 || n1 == 8 || n1 == 7 || n1 == 10 || n1 == 12){
        printf("31");
    }
    else if (n1 == 4 || n1 == 6 || n1 == 9 || n1 == 11){
        printf("30");
    }
    else {
        printf("28");
    }
}
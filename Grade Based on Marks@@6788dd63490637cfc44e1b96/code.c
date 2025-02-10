#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num >= 90){
        printf("A");
    }
    else if ( 90 > num >= 80){
        printf("B");
    }
    else if ( 80 > num >= 70)(
        printf("c");
    )
    else if ( 70 > num >= 60){
        printf("D");
    }
    else if ( num < 60){
        printf("F");
    }
    return 0;
}
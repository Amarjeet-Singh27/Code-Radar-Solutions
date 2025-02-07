#include <stdio.h>

int main() {
   int num;
   if(((num % 4 == 0)&&(num % 100 != 0)||(num % 400 == 0))){
    printf("leap Year");
   }
   else{
    printf("Not a Leap Year");
   }
    return 0;
}
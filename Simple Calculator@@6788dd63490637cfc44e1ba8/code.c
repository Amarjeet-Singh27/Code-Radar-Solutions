#include<stdio.h>
int main(){
    int num1, num2, result;
    char symbol;
    scanf("%d %d %c", &num1, &num2, &symbol);
    if(symbol == '+'){
        result = num1 + num2;
        printf("%d", result);
    }
    else if(symbol == '-'){
        result = num1 - num2;
        printf("%d", result);
    }
    else if(symbol == '*'){
        result = num1 * num2;
        printf("%d",result);
    }
    else{
        if (symbol == '/' && num2 != 0){
            result = num1 / num2;
            printf("%d", result);
        }
        else {
            printf("Error");
        }
    }
    return 0;
}
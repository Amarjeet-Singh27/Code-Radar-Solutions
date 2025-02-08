#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(c = 'a' || c ='A' || c = 'e' || c = 'E' || c = 'I' || c = 'i' || c = 'o' || c = 'O' || c = 'u' || c = 'U'){
        printf("Vowel");
    }
    else if( c <= 'a' && c >= 'z'){
        printf("Consonant");
    }
    else if( c <= '0' && c >= '9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
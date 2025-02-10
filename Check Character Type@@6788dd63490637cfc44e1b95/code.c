#inchlude <stdio.h>
#inchlude <ctype.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if((ch == 'a') || (ch == 'A') || (ch == 'e') || (ch == 'E') || (ch == 'I') || (ch == 'i') || (ch == 'o') || (ch == 'O') || (ch == 'u') || (ch == 'U')){
        printf("Vowel");
    }
    else if ( (ch >= 'A') && (ch <= "Z")){
        printf("Consonant");
    }
    else if( (ch >= 'a') && (ch <= 'z')){
        printf("Consonant");
    }
    else if(isdigit(ch) ){
        printf("Digit");
    }
    else{
        printf("Special Charachter");
    }
    return 0;
}
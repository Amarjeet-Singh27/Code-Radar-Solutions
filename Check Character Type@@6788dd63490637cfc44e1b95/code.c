#include <stdio.h>

int main() {
    char ch;

    
    scanf("%c", &ch);

    // Check if the character is a letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        // Check if it is a vowel (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character");
    }

    return 0;
}

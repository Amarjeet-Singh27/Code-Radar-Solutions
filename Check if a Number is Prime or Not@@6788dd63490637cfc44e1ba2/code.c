#include <stdio.h>

int main() {
    int num, is_prime = 1; // Assume the number is prime initially
    
    scanf("%d", &num);

    if (num <= 1) {
        is_prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= num / 2; i++) {  // Check divisibility up to num/2
            if (num % i == 0) {
                is_prime = 0; // If divisible, it's not prime
                break;
            }
        }
    }

    if (is_prime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}

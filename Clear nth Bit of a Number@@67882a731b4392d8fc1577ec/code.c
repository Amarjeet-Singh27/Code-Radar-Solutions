#include <stdio.h>

int main() {
    int n1, n2, result, result2;
    scanf("%d %d", &n1, &n2);
    result = ~(1<<n2);
    result2 = n1 & result;
    printf("%d", result2);
    return 0;
}
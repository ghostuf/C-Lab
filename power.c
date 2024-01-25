#include <stdio.h>

int main() {
    int base, exponent;
    long long power = 1;
    int i;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    if (exponent < 0) {
        printf("Error: Negative exponent is not supported.\n");
        return 1;
    }

    if (exponent == 0) {
        printf("%d ^ %d = 1", base, exponent);
        return 0;
    }
    for (i = 1; i <= exponent; i++) {
        power = power * base;
    }

    printf("%d ^ %d = %lld", base, exponent, power);
    return 0;
}
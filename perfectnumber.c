#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the proper divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of proper divisors is equal to the number
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
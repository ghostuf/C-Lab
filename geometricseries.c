#include <stdio.h>

int main() {
    int firstTerm, commonRatio, n;

    printf("Enter the first term: ");
    scanf("%d", &firstTerm);

    printf("Enter the common ratio: ");
    scanf("%d", &commonRatio);

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Geometric Progression: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", firstTerm);
        firstTerm *= commonRatio;
    }

    return 0;
}
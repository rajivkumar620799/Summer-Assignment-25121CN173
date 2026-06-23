#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the number upto which you want to calculate the sum of first N natural numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural number is: %d", n, sum);
    return 0;
}
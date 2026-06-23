#include <stdio.h>

int factorialUsingRecurssion(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorialUsingRecurssion(n-1);
}

int main() {
    int i, n, fact = 1;
    printf("Enter the number to find factorial: ");
    scanf("%d", &n);

    printf("Factorial of %d is: ", n);
    for (i = n; i > 0; i--) {
        fact *= i;
    }
    printf("%d\n", fact);

    // factorial using recurssion;

    printf("Printing factorial using recurssion\n");
    int factorial = factorialUsingRecurssion(n);

    printf("Factorial of %d is: %d", n, factorial);

    return 0;
}
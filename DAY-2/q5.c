#include <stdio.h>

int main() {
    int num, digit, sum = 0, temp;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d", num, sum);
    return 0;
}
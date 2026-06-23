#include <stdio.h>

int main() {
    int num, temp, digits = 0;
    printf("Enter a number whose digit you want to count: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    printf("Number of digits in %d is %d", num, digits);

    return 0;
}
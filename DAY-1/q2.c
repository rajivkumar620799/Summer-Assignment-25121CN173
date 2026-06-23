#include <stdio.h>

int main() {
    int tableNumber, i;

    printf("Enter a table number to print: ");
    scanf("%d", &tableNumber);

    printf("Printing Multiplication table of %d:\n", tableNumber);
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", tableNumber, i, tableNumber*i);
    }
    return 0;
}
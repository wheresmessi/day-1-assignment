#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
    }
    printf("Reverse of the number: %d\n", reversed_num);
    printf("\n 192224198");
    return 0;
}

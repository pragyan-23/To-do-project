/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/
#include <stdio.h>
#include <conio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, sum;
    printf("Enter a four-digit integer: ");
    scanf("%d", &number);
    digit1 = number / 1000;             // Thousands place
    digit2 = (number / 100) % 10;       // Hundreds place
    digit3 = (number / 10) % 10;        // Tens place
    digit4 = number % 10;               // Units place
    sum = digit1 + digit2 + digit3 + digit4;
    printf("Sum of digits = %d\n", sum);

    return 0;
}

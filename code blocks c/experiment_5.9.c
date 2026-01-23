/* Write a program to input a number and check whether it is prefect or not (A number is
called perfect if the sum of its divisors is equal to the number itself. For example, 28 is a perfect number
since 1+2+4+7+14=28).*/
#include <stdio.h>

int main() {
    int num, sum = 0;


    printf("Enter a number: ");
    scanf("%d", &num);


    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }


    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}

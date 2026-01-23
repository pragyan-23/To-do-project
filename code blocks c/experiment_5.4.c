/*Write a program that takes as input an integer ‘n’ and computes the following series: 1 -
(2/3!) + (3/4!) - (4/5!) + .... ± (n/(n+1)!) */
#include <stdio.h>

// Function to compute factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    double sum = 1.0; // Start with the first term

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        long long fact = factorial(i + 1);
        double term = (double)i / fact;

        // Alternate signs
        if (i % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    printf("Sum of the series: %.6f\n", sum);

    return 0;
}

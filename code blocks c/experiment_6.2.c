/* Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number.*/
#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Need at least 2 numbers to find second largest and second smallest.\n");
        return 1;
    }

    int arr[n];


    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("Second smallest number: %d\n", arr[1]);
    printf("Second largest number: %d\n", arr[n - 2]);

    return 0;
}

/*Write a program to read ‘n’ real numbers and then insert a new real number at a given
position (after insertion, the array size should increase by 1).*/
#include <stdio.h>

int main() {
    int n, pos, i;
    float newNum;


    printf("Enter the number of real numbers: ");
    scanf("%d", &n);

    float arr[n + 1]; //


    printf("Enter %d real numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }


    printf("Enter the new real number to insert: ");
    scanf("%f", &newNum);
    printf("Enter the position (0 to %d) to insert at: ", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }


    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }


    arr[pos] = newNum;


    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}

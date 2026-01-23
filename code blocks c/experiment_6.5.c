/* Write a program to read ‘n’ numbers and find the frequency of occurrence of each
number.*/
#include <stdio.h>

int main() {
    int n, i, j, count;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    // Input the elements
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count frequencies
    for(i = 0; i < n; i++) {
        if(freq[i] == -1) {
            count = 1;
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequencies
    printf("Frequency of each number:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d time(s)\n", arr[i], freq[i]);
        }
    }

    return 0;
}

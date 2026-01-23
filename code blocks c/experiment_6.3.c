/*Write a program to read ‘n’ characters and then delete the duplicate characters*/
#include <stdio.h>

int main() {
    int n, i, j, k;


    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char chars[n], unique[n];


    printf("Enter %d characters:\n", n);
    for(i = 0; i < n; i++) {
        scanf(" %c", &chars[i]);
    }


    int uniqueCount = 0;
    for(i = 0; i < n; i++) {
        int isDuplicate = 0;
        for(j = 0; j < uniqueCount; j++) {
            if(chars[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unique[uniqueCount++] = chars[i];
        }
    }


    printf("Characters after removing duplicates:\n");
    for(i = 0; i < uniqueCount; i++) {
        printf("%c ", unique[i]);
    }

    return 0;
}

/*Write a program to check if the given number is a natural number.
(Natural numbers start from 1)*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num >= 1) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is NOT a natural number.\n", num);
    }

    return 0;
}
/*Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement).*/
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    (num % 2 == 0)? printf("%d is even\n", num): printf("%d is odd\n", num);
    return 0;
}

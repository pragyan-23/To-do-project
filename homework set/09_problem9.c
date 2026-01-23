/*Write a program to check if a number is even or not*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is not even", num);
    }
    return 0;
    
    
}
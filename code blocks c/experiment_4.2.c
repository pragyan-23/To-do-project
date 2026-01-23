/*Write a program to input a number and print “ODD” if the number is odd and “EVEN” if
the number is even.*/
#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d", &num);
    if(num % 2 != 0){
        printf("The number is odd");
    }
    else{
        printf("The number is even");
    }
    return 0;
}

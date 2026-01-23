/*Write a program that requests two float type numbers from the user and then divides the
1st number by the 2nd and displays the result along with the numbers.*/
#include<stdio.h>
#include<conio.h>
int main(){
    float num1, num2;
    float division;
    printf("Enter 1st decimal number:");
    scanf("%f", &num1);
    printf("Enter 2nd decimal number:");
    scanf("%f", &num2);
    division = num1/num2;
    printf("The division of two decimal number is:%f/%f = %f\n", num1, num2, division);
    return 0;
}

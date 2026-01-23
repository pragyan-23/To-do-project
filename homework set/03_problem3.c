/*Write a program to print the average of 3 numbers*/
#include<stdio.h>
int main(){
    float a, b, c;
    float avg;
    printf("Enter three numbers:");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a + b + c)/3;
    printf("The average of three numbers:%f", avg);
    return 0;
}
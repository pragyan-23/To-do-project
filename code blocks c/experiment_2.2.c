/*Write a program that takes as input, the principal, rate of interest, and time, and then
calculates the simple and compound interest.*/
#include<stdio.h>
#include<math.h>
int main(){
    float principal, time, rate;
    float si, ci;
    printf("Enter principal amount:");
    scanf("%f", &principal);
    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);
    printf("Enter time (in years):");
    scanf("%f", &time);
    si = (principal * rate * time)/100;
    ci =  principal * pow((1 + rate / 100), time) - principal;
    printf("The simple interest is: %f\n", si);
    printf("The compound interest is: %f\n", ci);
    return 0;
}

/*Rewrite the program mentioned in Experiment 2.2. However, rename the data types
‘float’ to ‘Decimal’ and ‘int’ to ‘integer’ by using typedef statement.*/

#include<stdio.h>
#include<math.h>
typedef float decimal;
typedef int integer;
int main(){

    decimal principal, time, rate;
    decimal si, ci;
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

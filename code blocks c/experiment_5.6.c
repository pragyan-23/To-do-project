/* Write a program to find out the HCF and LCM of two numbers */
#include<stdio.h>
#include<conio.h>
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b);
}
int main()
{
    int num1, num2, hcf, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);
    lcm = findLCM(num1, num2);

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;

}

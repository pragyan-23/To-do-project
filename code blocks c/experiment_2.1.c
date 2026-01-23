/*Write a program to compute the area of a triangle given its base and height.*/
#include<stdio.h>
#include<conio.h>
int main(){
    int base, height;
    float area;
    printf("Enter the value of base:");
    scanf("%d", &base);
    printf("Enter the value of height:");
    scanf("%d", &height);
    area = 0.5*base*height;
    printf("The area of a triangle is : %f", area);
    return 0;
}

/*Write a program that takes the radius of a circle and displays its area and perimeter */
#include<stdio.h>
#include<conio.h>
#define PI 3.141
int main(){
    float radius;
    float area;
    float perimeter;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("The area of the circle is: %f\n", area);
    perimeter = 2*PI*radius;
    printf("The perimeter of the circle is: %f\n", perimeter);
    return 0;
}

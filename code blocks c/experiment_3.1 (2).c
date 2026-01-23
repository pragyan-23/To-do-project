/*Write a program to compute the area of a triangle given its three sides.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a, b, c, s, area;
    printf("Enter the lengths of the three sides of the triangle\n");
    scanf("%f %f %f", &a, &b, &c);
    if(a+b > c && a+c > b && b+c > a){
        s = (a + b + c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is:%f\n", area);
    }
    else{
        printf("invalid triangle: the given sides do not form a triangle.\n");
    }
    return 0;
}

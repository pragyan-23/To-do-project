/*Write a program to calculate perimeter of rectangle.Take sides, a & b, from the user*/
#include<stdio.h>
int main(){
    int a, b;
    int perimeter;
    printf("Enter the value of two sides\n");
    scanf("%d %d", &a, &b);
    perimeter = 2*(a + b);
    printf("The perimeter of a rectangle:%d", perimeter);
    return 0;
}
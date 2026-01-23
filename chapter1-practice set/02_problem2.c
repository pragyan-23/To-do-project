#include<stdio.h>
int main(){
    int radius, height;
    printf("Enter radius");
    scanf("%d", &radius);
    printf("Enter height");
    scanf("%d", &height);
    printf("The area of the circle with radius %d is %f\n", radius, 3.14*radius*radius);
    printf("The volume of the cyllinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius*height);
    return 0;
}
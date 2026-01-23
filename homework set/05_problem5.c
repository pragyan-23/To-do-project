/*Write a program to print the smallest number of two.*/
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two number:\n");
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        printf("a is great\n");
    }
    else{
        printf("a is not great");
    }
    return 0;
    
}
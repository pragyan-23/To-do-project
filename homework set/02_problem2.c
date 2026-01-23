/*Take a number(n) from user & output its cube(n*n*n)*/
#include<stdio.h>
int main(){
    int n;
    int cube;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    cube = n*n*n;
    printf("The cube of n is:%d", cube);
    return 0;
}
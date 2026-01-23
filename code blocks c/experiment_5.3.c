/*Write a program to count the number of digits in a number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, num, count=0;
    printf("Enter any  number:");
    scanf("%d", &num);
    if(num < 0){
        num = -num;
    }
    if(num == 0){
        count = 1;
    }
    else{
        for(count = 0; num!= 0; count++) {
            num /= 10;
        }
    }
    printf("Number of digits: %d\n",count);
    return 0;
}

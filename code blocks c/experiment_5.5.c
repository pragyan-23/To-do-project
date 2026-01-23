/*Write a program to find the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int count = 0, sum = 0;
    for(int i = 101; i < 200; i++){
        if(i % 7 == 0){
            count++;
            sum += i;
        }
    }
    printf("Count the numbers divisible by 7 between 101 and 199 :%d\n", count);
    printf("Sum of these numbers : %d\n", sum);
    return 0;
}

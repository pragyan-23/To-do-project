/*Write a program to read the price of an item in decimal form (like 15.95) and print the
output in paise (like 1595 paise).*/
#include<stdio.h>
#include <conio.h>

int main() {
    float price;
    int paise;


    printf("Enter the price of the item in rupees (e.g., 15.95): ");
    scanf("%f", &price);


    paise = (int)(price * 100 + 0.5);


    printf("Price in paise: %d paise\n", paise);

    return 0;
}

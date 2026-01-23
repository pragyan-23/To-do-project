#include<stdio.h>
#include<conio.h>
int main(){
    float temperature;
    int choice;
    printf("Temperature conversion programe\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2):");
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter temperature in celsius:");
        scanf("%f", &temperature);
        float Fahrenheit = (9.0/5.0)*(temperature + 32.0);
        printf("%f Celsius is equal to %f Fahrenheit.\n", temperature, Fahrenheit);
    }
    else if(choice == 2){
        printf("Enter temperature in Fahrenheit:");
        scanf("%f", &temperature);
        float Celsius = (5.0/9.0)*(temperature - 32.0);
        printf("%f Fahrenheit is equal to %f Celsius.\n", temperature, Celsius);
    }
    else{
        printf("Invalid choice.\n");
    }
    return 0;
}

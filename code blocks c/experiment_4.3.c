/* Admission to professional course is subject to the any one of the following conditions:
a) Marks in Mathematics >= 60, and Marks in Physics >= 50, and Marks in Chemistry >= 40
b) Total in all three subjects >= 200
Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is
admitted else displays “Not Admitted”.*/
#include<stdio.h>
#include<conio.h>
int main(){
    int math , physics, chemistry;
    printf("Enter marks in math:\n");
    scanf("%d", &math);
    printf("Enter marks in physics:\n");
    scanf("%d", &physics);
    printf("Enter marks in chemistry:\n");
    scanf("%d", &chemistry);
    if(( math >= 60 &&  physics >= 50 &&  chemistry >= 40) ||
            (math + physics + chemistry >= 200)) {
        printf("Admitted\n");
    } else {
        printf("Not Admitted\n");
    }
    return 0;
}

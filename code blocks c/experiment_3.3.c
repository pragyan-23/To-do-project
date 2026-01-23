/*Write a program to input a character and check whether it is in upper case or lower case
using conditional operator. [Hint: compare against the ASCII range.]*/
#include<stdio.h>
#include<conio.h>
int main(){
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);
    (ch >= 'A' && ch <= 'Z')?
        printf("'%c' is an Uppercase letter.\n", ch) :
        (ch >= 'a' && ch <= 'z') ?
            printf("'%c' is a Lowercase letter.\n", ch) :
            printf("'%c' is not an alphabetic character.\n", ch);

    return 0;
}

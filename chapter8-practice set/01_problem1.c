#include<stdio.h>
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v = (2, 3);
    printf("The value of vector is %di + %dj",v.i, v.j);
    return 0;
}


   
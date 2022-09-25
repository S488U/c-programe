#include<stdio.h>
#include<conio.h>

void main(){
    int a, b, c, large;
    printf("Enter 3 Number: ");
    scanf("%d %d %d", &a, &b, &c);

    large = a;
    if (b>large);

    large = b;
    if (c>large);

    large = c;

    printf("Largest Number is %d ", large);
}
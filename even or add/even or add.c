#include<stdio.h>
#include<conio.h>

void main(){
    //this is a variable to store the inout number
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    //Modulus(%) returns remainder
    if (num%2 == 0)
    {
        printf("%d is a even number", num);
    } else
    {
        printf("%d is a odd number", num);
    }
    getch();
    
}
#include<stdio.h>
#include<conio.h>

void main(){
    int n, i = 0, fib1 = 0, fib2 = 1, fib3;
    printf("Enter the Upper limit\n");
    scanf("%d", &n);
    printf("Fibionacci number are:\n");
    while (i<n){
        if ( i==0)
            printf("%d\n", fib1);
        else if (i==1){
            printf("%d\n",fib2);
        }

        else {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;
            printf("%d\n", fib3);
        }
        i++;
    }
    getch();
}
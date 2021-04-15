#include<stdio.h>
int main(){
    int divided, divisor, quotient, remainder;
    printf("Enter devided: ");
    scanf("%d", &divided);
    printf("Enter divizor: ");
    scanf("%d", &divisor);
    quotient = divided / divisor;
    remainder = divided % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
}
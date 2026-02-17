//calculating depreciation use arithemetic expresion and apply 
//formula based caulation.
#include <stdio.h>
int main() {
    float cost, rate;
    int year, n;

    printf("Enter cost price of asset: ");
    scanf("%f", &cost);

    printf("Enter depreciation rate: ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &n);

    printf("Year wise depreciation\n");

    for(year = 1; year <= n; year++) {
        printf("Year %d\t",year);
        printf("Depreciation = %f",year, cost * rate / 100);
        printf("\n");
    }

    return 0;
}
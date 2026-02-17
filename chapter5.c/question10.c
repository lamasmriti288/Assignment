//calculating factors
//use for loop
#include<stdio.h>
int main(){
    int n;
    int fact=1;
    int i;
    printf("Enter the number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("The factorial of the number is %d", fact);
    return 0;
}
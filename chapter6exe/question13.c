//to store a number in an array
//find the maximum and minimum
//printuing backward
//print array or string in reverse order
//search for a maximumm and print 
//store numbers in array [1,3,4,10,12,30,40] =largest is 40
#include<stdio.h>
int main(){
    int n;
    int i;
   
    printf("Enter the number of elements on array:");
    scanf("%d", &n);
    int a[n]; 
   
    printf("Enter the number:\n");
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int min=a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("The numbers are\n: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("Numbers in reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d \n", a[i]);

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    return 0;
}
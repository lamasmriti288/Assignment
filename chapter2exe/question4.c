//write a program that takes a character as input and 
//displays its ASCII value.
//convert lowercase to uppercase and uppercase to lowercase.
#include<stdio.h>
int main(){
    char ca;
    printf("Enter a character:");
    scanf("%c", &ca);

    printf("ASCII value = %d\n", ca);

    if (ca >= 'a' && ca <= 'z')
        printf("Uppercase: %c", ca - 32);
    else if (ca >= 'A' && ca <= 'Z')
        printf("Lowercase: %c", ca + 32);
        
    return 0;
}
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    int palindrome = 1;  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for(i = 0; str[i] != '\0'; i++) {
    if(str[i] == '\n') {
        str[i] = '\0';
        break;
    }
}
   
    while(str[length] != '\0') 
    length++;

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            palindrome = 0; 
            break;
        }
    }

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
        
    for(i = 0; i < length; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i]= str[i]-32;
    }
    printf("Uppercase: %s\n", str);

    return 0;
}
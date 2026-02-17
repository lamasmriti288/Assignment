//write a program to:
// read a full line of tetx
//display the line using formatted output.
//count total characters and spaces.
#include <stdio.h>
int main() {
    char txt[100];
    int i, count=0;

    printf("Enter text: ");
    fgets(txt, sizeof(txt), stdin);

    for (i = 0; txt[i]!='\0'; i++)
        count++;

    printf("Text: %s", txt);
    printf("Total characters and spaces: %d", count-1);
    return 0;
}
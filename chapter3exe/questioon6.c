//write a program to read marks of 5 students of a students
//display total marks and caculayes and sisplay avearge marks of the students.
//use correct format specifiers.
#include<stdio.h>
int main(){
    
    float a,b,c,d,e;
    float total, average;
    printf("Enter marks of 5 subjects:");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    total= a+b+c+d+e;
    average= total/5;
    printf("The total marks is=%f\n", total);
    printf("The average marks is=%f\n", average);

    return 0;
}
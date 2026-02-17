//write a c program to create a simple calculator using user definrd funcions. 
//the program should : 
//1.ask thr user to enter two numbers.
//2. display a menu of operations:
// add subtract  divide  multiply  square root  exit
// perform the selecetd operation using seperate functions. 
// repeat the menu until the user chooses 6 to exit.

#include<stdio.h>
#include<math.h>

int addition(int a ,int b)
{
    int sum = a+b;
    return sum;
}

int subtraction (int a,int b)
{
    int subtraction = a-b;
    return subtraction;
}
float division (int a , int b){
    float quotient = a/b;
    return quotient;
}
int multiplication (int a ,int b){
    int product= a*b;
    return product;
}
 float squareroot (int a , int b){
 float sqrt_a = sqrt(a);
 float sqrt_b = sqrt(b);
 }

 int main(){
int a,b,choice ;
printf ("enter two numbers:");
scanf ("%d,%d" ,&a,&b);

while (choice!=6){
    printf ("select an operation:\n");
    printf ("1. add\n");
    printf ("2. subtract\n");
    printf ("3. divide\n");
    printf ("4. multiply\n");
    printf ("5. square root\n");
    printf ("6. exit\n");
    scanf ("%d", &choice);
    
    switch(choice){
        case 1:{
            int sum = addition(a,b);
            printf ("the sum is %d\n", sum);
            break;}

        case 2:{
            int value = subtraction(a,b); 
            printf ("subtratced %d\n",value);
            break;
        }
        case 3:{
           float divide = division(a,b);
            printf ("the quotient is %d\n", divide);
            break; }
        case 4:{
           int multiply = multiplication(a,b);          
            printf ("the product is %d\n", multiply);
            break; }         
        case 5:{
           float sqrt = squareroot(a,b);        
            printf ("the square root of %d is %f\n", a, sqrt);
            printf ("the square root of %d is %f\n", b, sqrt);  
            break;}
        case 6:{
            printf (" 6.exit\n");
            return 0;}
        default:
            printf ("invalid choice. please select a valid option.\n");
    }
}
    return 0;
}
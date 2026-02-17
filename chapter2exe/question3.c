//write a program to calculate area and perimeter of a rectangle.
 #include<stdio.h>
int main(){
    
    int l=5, b=5;
    int area;
    int perimeter;
    area= l*b;           //formula to calculate area
    perimeter= 2*(l+b);  //formula to calculate perimeter
    printf("The area of rectangle is=%d\n",area);
    printf("The perimeter of rectangle is=%d",perimeter);
    return 0;
}
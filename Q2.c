#include <stdio.h>
int main() 
{
    int a;
    float b, c;
    printf("Please enter a integer number :");
    scanf("%d", &a);
    printf("Please enter a float number :");
    scanf("%f", &b);
    c = a + b;
    printf("\nImplicit Typr Conversion\n");
    printf("The sum of these two numbers is : %f", c);
    c = a - b;
    printf("\nThe difference of these two numbers is : %f", c);
    c = a * b;
    printf("\nThe product of these two numbers is : %f", c);
    c = a / b;
    printf("\nThe division of these two numbers is : %f", c);   
    return 0; }

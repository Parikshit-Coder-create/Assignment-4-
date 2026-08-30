#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);

    if(b!=0)
    {
        printf("Division = %.2f\n",(float)a/b);
        printf("Modulus = %d\n",a%b);
    }

    printf("Power = %.2f\n",pow(a,b));
    printf("Square Root of first = %.2f\n",sqrt(a));
    printf("Absolute = %d\n",abs(a));
    printf("Floor = %.2f\n",floor((double)a/b));
    printf("Ceil = %.2f\n",ceil((double)a/b));

    return 0;
}

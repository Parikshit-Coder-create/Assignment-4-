#include <stdio.h>

int main()
{
    int age,credit;
    float income;

    printf("Enter Age: ");
    scanf("%d",&age);

    printf("Enter Income: ");
    scanf("%f",&income);

    printf("Enter Credit Score: ");
    scanf("%d",&credit);

    if(age>=21 && age<=60 && income>35000 && credit>=750)
        printf("Eligible for Loan");
    else
        printf("Not Eligible");

    return 0;
}

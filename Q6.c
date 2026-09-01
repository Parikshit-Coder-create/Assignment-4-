#include <stdio.h>

int main()
{
    int m1,m2,m3;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);

    avg=(m1+m2+m3)/3.0;

    if(m1>=40 && m2>=40 && m3>=40)
        printf("Passed all subjects\n");
    else
        printf("Failed in one or more subjects\n");

    if(avg>=75)
        printf("Distinction");

    return 0;
}

#include <stdio.h>

int globalVar = 10;

int main() {
    int localVar = 20;
    static int staticVar = 30;

    printf("Inside main:\n");
    printf("Global = %d\n", globalVar);
    printf("Local = %d\n", localVar);
    printf("Static = %d\n", staticVar);

    {
        int localVar = 50;
        staticVar++;

        printf("\nInside block:\n");
        printf("Global = %d\n", globalVar);
        printf("Local = %d\n", localVar);
        printf("Static = %d\n", staticVar);
    }

    printf("\nBack to main:\n");
    printf("Global = %d\n", globalVar);
    printf("Local = %d\n", localVar);
    printf("Static = %d\n", staticVar);

    return 0;
}

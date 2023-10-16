#include <stdio.h>
int main() {
    int a;
    printf("Enter number: \n");
    scanf("%d", &a);

    if (a==0)
    {
        printf("The number is 0\n");
    }
    else if (a<0)
    {
        printf("The number is negative\n");
    }
    else 
    { 
        printf("The number is positive\n");
    }
    return 0;
}
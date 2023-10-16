#include <stdio.h>
int main() {
    int a;
    printf("Enter number: \n");
    scanf("%d", &a);

    if (a%4 == 0)
    {
        if (a%5 == 0)
        {
            printf("The number is divisible by 4 and 5 \n");
        }
        else 
        {
            printf("The number is not divisible by 4 and 5 \n");
        }
    }
    else
    {
        printf("The number is not divisible by 4 and 5 \n");
    }
    return 0;
}
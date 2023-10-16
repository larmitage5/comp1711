#include <stdio.h>
int main() {
    int a;
    printf("Enter the temperature: \n");
    scanf("%d", &a);

    if (a>=-10 && a<=40)
    {
        printf("The temperature is within the range \n");
    }
    else
    {
        printf("The temperature is outside the range \n");
    }
    return 0;
}
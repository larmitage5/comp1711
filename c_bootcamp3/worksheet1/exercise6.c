#include <stdio.h>
int main() {
    int a;
    printf("Enter number: \n");
    scanf("%d",&a);

    if (a>=0 && a<=100)
    {
        printf("Number within range 0-100 \n");
        printf("Enter number: \n");
        scanf("%d",&a);
    }
    else
    {
        if (a=-1)
        {
            printf("Termination value\n");
        }
        else
        {
            printf("Number not in range 0-100\n");
            printf("Enter number: \n");
            scanf("%d",&a);
        }
    }
}
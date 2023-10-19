#include <stdio.h>
int main() {
    int a;
    printf("Enter number: \n");
    scanf("%d",&a);

    while (a>=0 && a<=100)
    {
        printf("Number within range 0-100 \n");
        printf("Enter number: \n");
        scanf("%d",&a);
    }
    while (a>100 || a<-1)
    {
        printf("Number outside range\n");
        printf("Enter number: \n");
        scanf("%d",&a);
    }
    if (a=-1)
    {
        printf("Termination value entered\n");
    }
}
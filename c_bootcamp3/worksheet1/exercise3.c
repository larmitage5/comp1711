#include <stdio.h>
int main() {
    int a;
    printf("Enter marks: \n");
    scanf("%d", &a);

    if (a>=50)
    {
        if (a>=70)
        {
            printf("The student achieved a distinction \n");
        }
        else
        {
            printf("The student has achieved a pass \n");
        }
    }
    else 
    {
        printf("The student has failed \n");
    }
    return 0;
}
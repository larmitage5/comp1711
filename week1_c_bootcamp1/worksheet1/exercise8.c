#include <stdio.h>
int main() {
    int a, i, f;
    f = 1;
    printf("Enter integer: ");
    scanf("%d", &a);

    for (i=1; i<=a; i++)
    f=f*i;

    printf("The factorial is %d\n", f);
}
#include <stdio.h>
int main() {

    int a;
    int b;
    printf("Enter variable a: ");
    scanf("%d", &a);
    printf("Enter variable b: \n");
    scanf("%d", &b);

    a = a + b;

    b = a - b;

    a = a - b;

    printf("After swapping, a = %d, b = %d\n", a, b);
    return 0;

}
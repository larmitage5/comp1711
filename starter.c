#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d\n",c);
    return 0;
}
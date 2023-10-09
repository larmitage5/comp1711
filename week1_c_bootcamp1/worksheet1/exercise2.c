#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    printf("Integer 1:");
    scanf("%d", &a);
    printf("Integer 2:");
    scanf("%d", &b);
    c = a + b;
    printf("The sum is %d\n", c);
    return 0;
}
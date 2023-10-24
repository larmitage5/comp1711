#include <stdio.h>
int main() {
    int a;
    int length;
    int width;
    printf("Enter the length:");
    scanf("%d", &length);
    printf("Enter the width:");
    scanf("%d", &width);
    a = length * width;
    printf("The area of the rectange is %d\n" , a);
    return 0;
}
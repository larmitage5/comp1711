#include <stdio.h>

int circleArea (int r)
{
    int area;
    area = r*r*3.14;
    return area;
}

int main()
{
    printf("Enter radius\n");
    int b;
    (scanf("%d", &b));
    int a = circleArea(b);
    printf("The area is %d\n", a);
}
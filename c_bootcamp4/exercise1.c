#include <stdio.h>

int circleArea (int r)
{
    int area;
    area = r * r * 3.14;
    return area;
}

int main()
{
    printf("Enter radius\n");
    int a = circleArea (scanf("%d", &r));
    printf("The area is %d\n", a);
}
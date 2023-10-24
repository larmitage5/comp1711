#include <stdio.h>
int main () {
    int r;
    int area;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    area = r * r * 3.14;
    printf("The area of the circle is %d/n", area);
    return 0;
}
#include <stdio.h>
int main() {
    float p, r, t, a;
    printf("Enter initial amount of money: ");
    scanf("%f", &p);
    printf("Enter percentage rate per year: ");
    scanf("%f", &r);
    printf ("Enter time: ");
    scanf("%f", &t);
    
    r = r/100;
    a = p * r * t;

    printf("The interest acquired is %f\n", a);
    return 0;
}
#include <stdio.h>

int spherevolume (float r)
{
    float volume;
    volume = (4/3)*3.14*(r*r*r);
    return volume;
}

int main() {
    printf("Enter radius \n");
    float b;
    scanf("%f", &b);
    float a = spherevolume(b);
    printf("The volume is %lf\n", a);
}
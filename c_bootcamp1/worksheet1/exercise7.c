#include <stdio.h>
int main() {
    int farenheit;
    int celcius;
    printf("Enter temperature in fareheit: ");
    scanf("%d", &farenheit);
    celcius = ((farenheit - 32) * 5)/9;
    printf("The temperature in celcius is %d\n", celcius);
    return 0;
}
#include <stdio.h>
float calculate (float a, float b, char op) {
    switch(op) {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': if (b != 0) return a/b;
    }
    return 0;
}
int main () {
    float result = calculate(5,7,'+');
    printf("%f", result);
    return 0;
}
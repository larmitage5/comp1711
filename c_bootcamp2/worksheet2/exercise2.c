#include <stdio.h>
int main() {
    int array1[]={1,2,3,4,5};
    int i;
    for (i=0;i<5;i++) {
        printf("Array 1 is %d\n", array1[i]);
    };
    int a;
    for (a=4;a>-1;a--) {
        printf("The reverse of the array is %d\n", array1[a]);
    };
    return 0;
}
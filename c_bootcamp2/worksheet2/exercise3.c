#include <stdio.h>
int main() {
    int array[]={2,1,5,3,4};
    int i;
    int max = array[0];
    for (i=1;i<5;i++) {
        if (array[i]>max)
        max=array[i];
    };
    printf("The largest integer in the array is %d\n",max);
    return 0;
}
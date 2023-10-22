#include <stdio.h>
int main() {
    int arr[6]={6,3,2,6,4,7};
    int a;
    int b;
    for (a=0;a++;a<6){
        for (b=a+1;b++;b<6){
            if arr[a]=arr[b];
            printf("Duplicate %d\n", arr[a]);
        }
    }
    return 0;
}
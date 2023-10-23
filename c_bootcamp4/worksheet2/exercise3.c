#include <stdio.h>

int str_len(char str1[100])
{
    int i;
    for (i=1; str1[i] != '\0' ; ++i)
    {
        printf("The length of the string is %d\n", i);
    }
}

int main() {
    printf("Enter string: \n");
    char a[100];
    scanf("%s", a);
    str_len(a);
}
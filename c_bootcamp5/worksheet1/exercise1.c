#include <stdio.h>
int main() {
    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        perror("");
        return 1;
    }

    {
        int n, num_lines = n;
        printf("Enter a number: \n");
        scanf("%d", &n);
        int i = 1;
        while (i<=n)
        {
            fprintf(file,"%d \n", i*i);
            i += 1;
        }
    }
    fclose(file);
    return 0;
}
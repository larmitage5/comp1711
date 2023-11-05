#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file = fopen("squares.dat", "r");
    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    int counter = 0;
    float sum = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL)
    {
        sum += atoi(line_buffer);
        counter++;
    }
    printf("The average is %.2f\n", sum/counter);
    fclose(file);
    return 0;
}
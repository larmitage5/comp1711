#include <stdio.h>
char* concatStrings(char *str1, char *str2) {
// Find the length of str1int 
    len1 = 0;
 while (str1[len1] != '\0') {
    len1++;
}
// Find the length of str2int 
len2 = 0;
while (str2[len2] != '\0') {
    len2++;
}
// Create a new string to hold the concatenated resultstatic 
char result[100];
// Copy str1 into result
for (int i = 0; i < len1; i++) {
    result[i] = str1[i];
}// Append str2 at the end of result
for (int i = 0; i < len2; i++) {
    result[len1 + i] = str2[i];
}// Null-terminate the result
result[len1 + len2] = '\0';
return result;
}
int main() {
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *newString = concatStrings(str1, str2);
    printf("Concatenated string: %s\n", newString);
    return 0;}
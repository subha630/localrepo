// Online C compiler to run C program online
#include <stdio.h>

int main() {
  #include <string.h>

char str1[20] = "Hello";
char str2[] = "World";

printf("Length: %zu\n", strlen(str1));
strcpy(str1, "Hi");          // Copy
strcat(str1, str2);          // Concatenate
if (strcmp(str1, str2) == 0) // Compare
    printf("Equal");

    return 0;
}
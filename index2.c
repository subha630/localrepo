// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int x = 10;
int *ptr = &x;

printf("Value: %d\n", *ptr); // Dereference
*ptr = 20;                  // Modify value

    return 0;
}

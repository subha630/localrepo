// Online C compiler to run C program online
#include <stdio.h>

int main() {
  struct Student {
    char name[50];
    int age;
};

struct Student s1 = {"John", 20};
printf("%s %d", s1.name, s1.age);

    return 0;
}
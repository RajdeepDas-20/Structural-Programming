#include <stdio.h>

int main() {
  int myAge = 43;  // Variable declaration
  int* ptr = &myAge;  // Pointer declaration
  printf("%p\n", ptr);
  printf("%d\n", *ptr);
  
  return 0;
}

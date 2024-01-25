//Program to calculate the lcm of two numbers
#include <stdio.h>
int main() {
  int num1, num2, max;
  printf("Enter two positive integers: ");
  scanf("%d %d", &num1, &num2); 

  max = (num1 > num2) ? num1 : num2;

  while (1) {
    if (max % num1 == 0 && max % num2 == 0) {
      printf("LCM of the numbers %d and %d = %d.", num1, num2, max);
      break;
    }
    ++max;
  }
  return 0;
}
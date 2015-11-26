// Question 7
// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
// What is the 10 001st prime number?

#include <stdio.h>

typedef int bool;
#define true 1
#define false 0

bool is_prime(int num) {
  bool isPrime = true;

  if (num == 1 || num == 2) {
    return isPrime;
  }

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

int main(void) {
  int position = 0;
  int num = 2;

  while (true) {
    if (is_prime(num) == true) {
      position++;
    }

    if (position == 10001) {
      break;
    }

    num++;
  }

  printf("Prime number: %d\n", num);
  printf("At position: %d\n", position);
}

/*
The sum of the squares of the first ten natural numbers is: 12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is: (1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

int sum_of_squares(number_of_elements) {
  return ((number_of_elements * (number_of_elements + 1)) * (2 * number_of_elements + 1)) / 6;
}

int square_of_sum(first_element, last_element, number_of_elements) {
  double sum = ((first_element + last_element) * number_of_elements) / 2;
  return sum * sum;
}

int main(void) {
  double diff = square_of_sum(1, 100, 100) - sum_of_squares(100);
  printf("%.f\n", diff);
}
